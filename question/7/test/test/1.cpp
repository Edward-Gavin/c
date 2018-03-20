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

int main(void)
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

