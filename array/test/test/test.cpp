// test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"


int main1()		//数组的简单应用
{
	int a[10];

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d", a[j]);
	}
	system("pause");
	return 0;
}

int main2(void)		//数组的定义
{
	int b[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int c[10] = { 0,1,2,3,4 };
	int d[10] = { 0 };
	int e[] = { 1,2,3,4,5 };


	system("pause");
	return 0;
}


int main3(void)	//数组方法计算fibonacci数列
{
	int i;
	int f[20] = { 1,1 };
	for (i = 2; i < 20; i++)
	{
		f[i] = f[i - 2] + f[i - 1];
	}
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0) printf("\n");
		printf("%12d", f[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

int main4(void)		//冒泡法排序
{
	int a[10];
	int i, j, t;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d,", &a[i]);
	}
	printf("\n");
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9; i++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	printf("the sorted numbers: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

int main5(void)		//矩阵的置换
{
	float pay[3][10];
	float b[4][10];
	int a[2][3] = { {1,2,3},{4,5,6} };
	int c[3][2];

	int i, j;


	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", a[i][j]);
			c[j][i] = a[i][j];
		}
	}
		
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d", c[i][j]);
		}
	}
	system("pause");
	return 0;
}

int main6(void)		//定义字符数组
{
	char c[10] = { 'I',' ','a','m',' ', 'a', ' ', };

	for (int i = 0; i < 10; i++)
		printf("%c", c[i]);
	system("pause");
	return 0;
}

int main7(void)		//输出指定格式
{
	char c[][5] = { {' ', ' ', '*'}, {' ', '*', ' ','*' },{'*',' ',' ',' ','*'},
	{ ' ', '*', ' ','*' },{ ' ', ' ', '*' } };
	for (int i = 0; i < 5; i++)
	{ 
		for (int j = 0; j < 5; j++)
			printf("%c", c[i][j]);
		printf("\n");
	}
		
	system("pause");
	return 0;
}

int main8(void)	//字符串的定义及输入输出
{
	char a[] = { "I am a student." };
	char b[] = "I am a master.";
	char c[] = "I am a teacher.";
	char d[10];


	printf("%s", c);
	printf("\n");

	scanf_s("%s", d);
	printf("%s", d);


	for (int i = 0; a[i] != '\0'; i++)
		printf("%c", a[i]);
	printf("\n");
	for (int j = 0; b[j] != '\0'; j++)
		printf("%c", b[j]);
	printf("\n");
	system("pause");
	return 0;
}


int main9(void)		// 使用字符串处理函数
{
	char str[] = "China";
	puts(str);		//可以使用printf()函数来替代

	char str2[] = "I am from China.\nWhere are you from? ";
	puts(str2);

	gets_s(str);

	//printf("%s", strcat_s(str, str2));		//连接两个字符串

	char str3[10];				//字符串复制函数
	char str5[10];
	char str6[10];
	char str4[] = "China";

	strcpy_s(str3, str4);
	printf("%s\n", str3);
	strcpy_s(str5, "abcdef");
	printf("%s\n", str5);
	strncpy_s(str6, str4, 3);
	printf("%s\n", str6);

	if (strcmp(str2, str3) > 0)
		printf("yes");
	else
		printf("no");

	int a;
	a = strlen(str2);
	printf("%d", a);

	char g[10] = "CHINA";

	_strlwr_s(g);
	printf("%s", g);


	system("pause");
	return 0;
}
#define MAX 81

int main10(void)			//计算单词的个数
{
	char string[MAX];
	int i, num = 0, word = 0;
	char c;
	gets_s(string);
	for (i = 0; (c = string[i]) != 0; i++)
	{
		if (c == ' ')
			word = 0;
		else if (word == 0)
		{
			word += 1;
			num++;
		}
	}

	printf("There are %d words in this line.", num);

	system("pause");
	return 0;
}

int main(void)
{
	char str[3][20];
	char string[20];
	int i;
	for (i = 0; i < 3; i++)
	{
		gets_s(str[i]);

	}
	if (strcmp(str[0], str[1]) > 0)
		strcpy_s(string, str[0]);
	else
		strcpy_s(string, str[1]);

	if (strcmp(str[2], string) > 0)
		strcpy_s(string, str[2]);

	printf("The largest string is: \n%s\n", string);


	system("pause");
	return 0;
}

