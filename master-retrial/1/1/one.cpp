#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define SIZE 10

// 编写一个交换变量值的函数，利用该函数交换数组a和数组b中的对应元素值。
int main1(void)
{
	void swap(int *a, int *b);
	int a[SIZE], b[SIZE], i, n;

	printf("Input array length n<=%d: \n", SIZE);
	scanf_s("%d", &n);
	printf("Input array a: \n");
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("Input array b: \n");
	for (i = 0; i < n; i++)
		scanf_s("%d", &b[i]);

	for (i = 0; i < n; i++)
		swap(&a[i], &b[i]);
	printf("\n");
	printf("After swap\n");
	printf("Array a: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("Array b: \n");
	for (i = 0; i < n; i++)
		printf("%d ", b[i]);
	printf("\n");

	system("pause");
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main2(void)
{
	int a = 1999;
	int ge, shi, bai, qian;

	ge = a % 10;
	printf("%d\n", ge);
	shi = a%100/10;
	printf("%d\n", shi);
	bai = a % 1000 / 100;
	printf("%d\n", bai);
	qian = a % 10000 / 1000;
	printf("%d\n", qian);

	int i;
	for (i = 1002; i < 1111; i++)
		if (a%10*1000+a%100/10*100+a%1000/100*10+a%10000/1000 == i * 9)
			printf("%d", i);

	system("pause");
	return 0;
}


int pos[101], div1[101];
int main(void)
{

	int m, n, j, i;

	printf("Please input m/n(0<m<n<=100)");
	scanf_s("%d%d", &m, &n);
	printf("%d/%d=0.", m, n);
	for (i = 1; i <= 100; i++)
	{
		pos[m] = i;
		m *= 10;
		div1[i] = m / n;
		m = m % n;
		if (m == 0)
		{
			for (j = 1; j <= i; j++)

				printf("%d", div1[j]);
			break;
		}
		if (pos[m] != 0)
		{
			for (j = 1; j <= i; j++)
				printf("%d", div1[j]);
			printf("\nloop: start=%d, end=%d", pos[m], i);
			break;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}