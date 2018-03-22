#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main1(void)
{
	int hfc(int, int);
	int lcd(int, int, int);

	int u, v, h, l;
	scanf_s("%d,%d", &u, &v);
	h = hfc(u, v);
	l = lcd(u, v, h);
	printf("HCF is %d\n", h);
	printf("LCD is %d\n", l);
	
	system("pause");
	return 0;
}

int hfc(int u, int v)
{
	int t, r;
	if (v > u)
	{
		t = u;
		u = v;
		v = t;
	}
	while ((r = u % v) != 0)
	{
		u = v;
		v = r;
	}
	return v;

}

int lcd(int u, int v, int h)
{
	return (u*v / h);
}


float x1, x2, disc, p, q;

int main2(void)
{
	void great_than_zero(float, float);
	void equal_to_zero(float, float);
	void smaller_than_zero(float, float);

	float a, b, c;
	printf("Please input a, b, c: \n");
	scanf_s("%f,%f,%f", &a, &b, &c);
	printf("equation: %5.2f*x*x+%5.2f*x+%5.2f=0\n", a, b, c);
	disc = b * b - 4 * a*c;
	printf("root: \n");
	if (disc > 0)
	{
		great_than_zero(a, b);
		printf("x1=%f\tx2=%f\n", x1, x2);
	}
	else if (disc == 0)
	{
		equal_to_zero(a, b);
		printf("x1=%f\tx2=%f\n", x1, x2);
	}
	else
	{
		smaller_than_zero(a, b);
		printf("x1=%f+%f\t x2=%f-%f", p, q, p, q);
	}

	system("pause");
	return 0;
}

void great_than_zero(float a, float b)
{
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);

}

void equal_to_zero(float a, float b)
{
	x1 = x1 = (-b) / (2 * a);

}

void smaller_than_zero(float a, float b)
{
	p = -b / (2 * a);
	q = sqrt(-disc) / (2 * a);
}


int main3(void)
{
	int prime(int);

	int n;
	printf("Input an integer: ");
	scanf_s("%d", &n);
	if (prime(n))
		printf("%d is a prime.\n", n);
	else
		printf("%d is not a prime. \n");

	system("pause");
	return 0;
}

int prime(int n)
{
	int flag = 1, i;
	for (i = 2; i < n / 2 && flag == 1; i++)
		if (n%i == 0)
			flag = 0;
	return (flag);
}

int array[3][3];
int main(void)
{

	void convert(int array[][3]);

	int i, j;
	printf("Input array: \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &array[i][j]);
	printf("\noriginal array: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5d", array[i][j]);
		printf("\n");
	}
	convert(array);
	printf("convert array :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5d", array[i][j]);
		printf("\n");
	}


	system("pause");
	return 0;
}


void convert(int array[][3])
{
	int i, j, k;
	for(i=0; i<3;i++)
}