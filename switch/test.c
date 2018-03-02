#include <stdio.h>


int main1(void)
{
	char grade;

	scanf("%c", &grade);
	printf("your score: ", grade);
	switch(grade)
	{
	case 'A': printf("85-100\n");
		break;
	case 'B': printf("70-84\n");
		break;
	case 'C': printf("60-69\n");
		break;
	case 'D': printf("<60\n");
		break;
	default: printf("enter data error!\n");
	}

	getch();
	return 0;
}

int main(void)
{
	void action1(int, int);
	void action2(int, int);

	char ch;
	int a=15, b=23;
	ch = getchar();

	switch(ch)
	{
	case 'a':
	case 'A': action1(a, b); break;
	case 'b':
	case 'B': action2(a, b); break;
	default: putchar('\a');
	}

	getch();
	return 0;
}

void action1(int a, int b)
{	
	printf("a + b = %d\n", a+b);
}

void action2(int a, int b)
{
	printf("a * b = %d\n", a*b);
}
