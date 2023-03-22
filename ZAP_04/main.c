#include<stdio.h>
#include<math.h>

void vymen(int* p_x, int* p_y) {
	int pom;
	pom = *p_x;
	*p_x = *p_y;
	*p_y = pom;
}

int kvad_rov(float a, float b, float c, float* x1, float* x2)
{
	int ret_val;
	float dis;

	dis = ((b * b) - (4 * a * c));

	if (dis > 0)
	{
		*x1 = (-b - sqrt(dis)) / (2 * a);
		*x2 = (-b + sqrt(dis)) / (2 * a);
		ret_val = 1;
	}
	else
	{
		ret_val = 0;
	}
	return ret_val;
}

int cti(int* p_mezery, int* p_male) {
	int c, pocet = 0;

	*p_mezery = 0;
	*p_male = 0;

	while ((c = getchar()) != '/n')
	{
		pocet++;
		if (c == ' ')
		{
			(*p_mezery)++;
		}
		if (c >= 'a' && c <= 'z')
		{
			(*p_male)++;
		}
	}
	return (pocet == 0) ? 0 : 1;

}


double pol1(double x) {
	return (x * x + 8);
}
double pol2(double x) {
	return (x * x - 3);
}

void tabulace(double d, double h, double k, double (*p_f)()) {
	double i;

	for (i = d; i <= h; i += k)
	{
		printf("%f %f \n", i, p_f, (i));
	}
	putchar('\n');

}

#define DATA_LEN		10

void bubblesort(int data[], int data_len) {
	int i, j, pom;

	for (i = 0; i < (data_len -1); i++)
	{
		for (j = 0; j < (data_len - 1 -i); j++)
		{
			if (data[j] > data[j + 1])
			{
				pom = data[j];
				data[j] = data[j + 1];
				data[j + 1] = pom;
			}
		}
	}
}



int main()
{

	// pr 1
	//int i, j, * p_i;

	//printf("2 cisla: \n");
	//scanf("%d %d", &i, &j);
	//p_i = (i > j) ? &i : &j;

	//printf("Vetsi je: %d", *p_i);

	// pr 2
	//int i = 5, j = 3;
	//vymen(&i, &j);
	//printf("hodnoty: %d %d", i, j);

	// pr 3
	//float x1, x2;
	//int result;

	//result = kvad_rov(-2, 0, 5, &x1, &x2);
	//if (result == 1)
	//{
	//	printf("%f \t %f", x1, x2);
	//}
	//else {
	//	printf("to je tlak");
	//}

	// pr 4
	//int mezery, male;
	//while (cti(&mezery, &male) == 1)
	//{
	//	printf("mezer: %d malych pismen %d", mezery, male);
	//}

	// pr 8
	
	int i;
	int data[DATA_LEN];
	
	printf("Data pred:\n");
	for (i = 0; i < DATA_LEN; i++)
	{
		data[i] = DATA_LEN - i;
		printf("%d ", data[i]);
	}

	printf("\n");
	bubblesort(data, DATA_LEN);

	printf("Data po:\n");
	for (i = 0; i < DATA_LEN; i++)
	{
		printf("%d ", data[i]);
	}


	return 0;
}

