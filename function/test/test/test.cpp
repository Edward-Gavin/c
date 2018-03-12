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

int main4(void)				//4数中的最大数
{
	int max4(int, int, int, int);
	int a, b, c, d, maxn;
	printf("Please input 4 numbers: \n");
	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);

	maxn = max4(a, b, c, d);
	printf("max is %d. \n", maxn);

	system("pause");
	return 0;
}

int max4(int a, int b, int c, int d)
{
	int max1(int, int);
	int m;

	m = max1(a, b);
	m = max1(m, c);
	m = max1(m, d);

	return m;
}

int main5(void)			//函数的递归调用
{
	int age(int);
	printf("No.5 -age: %d", age(5));

	system("pause");
	return 0;
}

int age(int n)
{
	int c;
	if (n == 1)
		c = 10;
	else
		c = age(n - 1) + 2;
	return(c);

}

int main6(void)				//求n!
{
	int fac(int);
	int n, sum;
	printf("Please input the n: \n");
	scanf_s("%d", &n);
	sum = fac(n);
	printf("%d sum is: %d", n, sum);

	system("pause");
	return 0;
}

int fac(int n)
{
	int f;

	if (n < 0)
		printf("n<0, error data.");
	else if (n==1||n==0)
		f = 1;
	else
		f = fac(n - 1)*n;
	return f;

}

int main7(void)				//数组做函数的参数
{
	int max1(int, int);
	int a[10], n, m, i;

	printf("Please input 10 numbers: \n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 1, m = a[0], n = 0; i < 10; i++)
	{
		if (max(m, a[i]) > m)
		{
			m = max(m, a[i]);
			n = i;
		}
	}
	printf("The largest number is %d\nIt is %dth number.\n", m, n + 1);

	system("pause");
	return 0;
}


int main(void)
{
	float average(float array[10]);

	float score[10], aver;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &score[i]);
	}
	printf("\n");

	aver = average(score);
	printf("average is: %f", aver);

	system("pause");
	return 0;
}

float average(float array[10])
{
	int i;
	float sum = 0;
	float aver;

	for (i = 0; i < 10; i++)
		sum += array[i];

	aver = sum / 10;
	return aver;
}