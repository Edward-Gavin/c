// test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "math.h"


int main1()		//计算输入的字符中字母，数字，空格，其他字符的个数
{
	char c;
	int letters = 0, numbers = 0, space = 0, other = 0;

	printf("Please input the words: \n");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
			letters++;
		else if (c == ' ')
			space++;
		else if (c >= '0'&&c <= '9')
			numbers++;
		else
			other++;
	}

	printf("letters: %d\n numbers: %d\n space: %d\n other: %d\n", letters, numbers, space, other);
	system("pause");
    return 0;
}

int main2(void)		//计算两个数的最小公倍数，最大公约数
{
	int m, n, temp, p, r;

	printf("Please input two number: \n");
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	p = n * m;

	while (m != 0)
	{
		r = n % m;
		n = m;
		m = r;
	}

	printf("max is: %d\n", n);
	printf("min is: %d\n", p / n);

	system("pause");
	return 0;
}


int main(void)
{


	system("pause");
	return 0;
}