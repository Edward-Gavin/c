#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

int main1(void)
{
	void print_star();
	void print_message();

	
	print_star();
	print_message();
	print_star();

	system("pause");
	return 0;
}

void print_star()
{
	printf("******************\n");
}

void print_message()
{
	printf("How do you do! \n");
}


int max1(int a, int b)
{
	int z;
	z = (a > b) ? a : b;
	return z;
}

int main2(void)
{
	int max1(int, int);

	int temp, a, b, c, maxnum;
	printf("Please input three numbers: \n");
	scanf_s("%d,%d,%d", &a, &b, &c);
	temp = max1(a, b);
	maxnum = max1(temp, c);
	printf("The max number is %d", maxnum);

	system("pause");
	return 0;
}

int main3(void)
{
	int max(float, float);		//函数声明

	float a, b;
	int maxnumber;

	printf("Please input two numbers: \n");
	scanf_s("%f,%f", &a, &b);
	maxnumber = max(a, b);
	printf("The max number is: %d\n", maxnumber);
	
	system("pause");
	return 0;
}

int max(float a, float b)		//若函数类型与返回值类型不一致，则强制转换返回值类型为函数类型。
{
	float t;
	t = (a > b) ? a : b;
	return t;
}

