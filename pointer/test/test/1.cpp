#include "stdio.h"
#include "stdlib.h"


int main1(void)
{
	int a=4, b=9;
	int * pointer_1, * pointer_2;

	pointer_1 = &a;
	pointer_2 = &b;
	printf("a=%d, b=%d\n", a, b);
	printf("* pointer_1 = %d\n*pointer_2 = %d\n", *pointer_1, *pointer_2);

	system("pause");
	return 0;
}


int main2(void)		//引入第三个变量
{
	int a, b;
	int temp;

	scanf_s("%d,%d", &a, &b);
	printf("a=%d, b=%d\n", a, b);
	printf("exchange:\n");
	temp = a;
	a = b;
	b = temp;

	printf("a=%d, b=%d", a, b);

	system("pause");
	return 0;
}


int main3(void)			//使用指针交换两个数
{
	int a, b;

	int *pointer_a, *pointer_b;

	pointer_a = &a;
	pointer_b = &b;

	scanf_s("%d,%d", &a, &b);
	printf("a=%d, b=%d\n", a, b);
	printf("exchange:\n");
	printf("a=%d, b=%d\n", *pointer_b, *pointer_a);

	system("pause");
	return 0;
}


int main(void)
{
	void swap(int *p1, int *p2);
	int a, b;
	int *pointer_a, *pointer_b;

	printf("Please input two integer numbers: \n");
	scanf_s("%d,%d", &a, &b);
	pointer_a = &a;
	pointer_b = &b;

	if (a < b)
		swap(pointer_a, pointer_b);
	printf("max=%d, min=%d", *pointer_a, *pointer_b);


	system("pause");
	return 0;
}

void swap(int *p1, int *p2)
{
	int *p;

	p = p1;
	p1 = p2;
	p2 = p;
	
}