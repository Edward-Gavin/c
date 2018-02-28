#include <stdio.h>

int max(int a, int b)
{
	int z;
	if (a>b)
		z=z;
	else
		z=b;
	return(z);
}

int leap(int year)
{
	if ((year%4)!=0)
		return 0;
	else
	{
		if ((year%100)!=0)
			return 1;
		else
		{
			if ((year%400)!=0)
				return 0;
			else 
				return 1;
		}
	}
}

int jiecheng(int end)
{
	int sum, i;
	sum = 1;
	for(i=1; i<=end; i++)
	{
		sum *=i;
	}
	return sum;
}

int jiecheng2(int end)
{
	int i, t;
	t=1;
	i=2;
	while(i<=end)
	{
		t = t*i;
		i = i+1;
	}
	return t;
}

int fenshu(int end)
{
	int sign = 1;
	double deno=2.0, sum=1.0, term;
	while(deno<=end)
	{
		sign = -sign;
		term = sign/deno;
		sum = sum+term;
		deno = deno+1;
	}
	return sum;
}

int main(void)
{
	/*
	scanf("%d, %d", &a, &b);
	c = max(a, b);
	printf("max = %d", c);
	getch();
	*/
	/*int i, flag;
	for(i=1; i<=2018; i++)
	{
		flag = leap(i);
		if (flag==1)
			printf("%d---\n", i);
	}*/
	int sum;
	sum = jiecheng(10);
	printf("%d", sum);
	getch();
	return 0;
}

