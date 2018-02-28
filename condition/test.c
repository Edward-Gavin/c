#include <stdio.h>



int main1(void)
{
	char ch;
	int x, y;

	scanf("%c", &ch);
	ch = (ch>='A'&&ch<='Z')?(ch+32):ch;
	printf("%c\n",ch);
	

	scanf("%d", &x);
	if (x>=0)
	{
		if(x>0)
			y=1;
		else
			y=0;
	}
	else
		y=-1;

	printf("x=%d, y=%d", x, y);
		

	getch();
	return 0;
} 


int main2()
{
	char grade;

	scanf("%c", &grade);
	printf("Your score:");
	switch(grade)
	{
	case 'A':printf("85-100\n");
		break;
	case 'B':printf("70-84\n");
		break;
	case 'C':printf("60-69\n");
		break;
	case 'D':printf("<60\n");
		break;
	default:printf("enter data error!\n");
	}

	getch();
	return 0;
}



int main(void)
{

	void action1(int, int);
	void action2(int, int);

	char ch;

	int a = 15;
	int b = 23;

	ch = getchar();

	switch(ch)
	{
	case 'a':
	case 'A':action1(a, b); break;
	case 'b':
	case 'B':action2(a, b); break;
	default: putchar('\n');
	}

	getch();
	return 0;
}

void action1(int x, int y)
{
	printf("x+y=%d\n", x+y);
}

void action2(int x, int y)
{
	printf("x*y=%d", x*y);
}