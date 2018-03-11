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


int max(int a, int b)
{
	int z;
	z = (a > b) ? a : b;
	return z;
}

int main2(void)
{
	int max(int, int);

	int temp, a, b, c, maxnum;
	printf("Please input three numbers: \n");
	scanf_s("%d,%d,%d", &a, &b, &c);
	temp = max(a, b);
	maxnum = max(temp, c);
	printf("The max number is %d", maxnum);

	system("pause");
	return 0;
}

