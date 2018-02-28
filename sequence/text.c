#include <stdio.h>
#include <math.h>
#define PI 3.1416 //‘§±‡“Î÷∏¡Ó
#define PRICE 40

int main1(void)
{
	const int price=40;
	const double pi=3.14;
	char c = '?';
	unsigned short d=4;
	int abc = sizeof(pi);
	int cd;
	unsigned char cc = 255;
	unsigned char ca = 130;
	int i;
	float f = 3.14159f;



	cd = c + 1;

	printf("abc is %d size.\n", abc);
	printf("d is %d\n", d);
	printf("%d, %c\n",c,c);
	printf("%d\n", cd);
	printf("%d\n", cc);
	for(i=128; i<=255; i++)
		printf("%d: %c\n", i,i);

	printf("%d: %c\n",ca, ca);
	getch();

	return 0;

}


char uptodown(char cc)
{
	char c;
	c = cc+32;

	return c;
}

double sqart(double a, double b, double c)
{
	double s, area;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}

int main2(void)
{
	char ca, cb;
	int abc = 65;
	char d ;

	float e=3.23;
	int f;

	f = (int)e;
	d = (char)abc;
	printf("f is %d", f);
	printf("d is %c\n", d);
	printf("input a up letter: \n");
	scanf("%c", &ca);
	if (65<=ca && ca<=90)
	{
		cb = uptodown(ca);
		printf("output a down letter: %c", cb);
	}
	else
		printf("input is not a upletter.");
	
	
	getch();
	return 0;
}

int main3(void)
{
	double a, b, c, result;
	int d=5, e=5, f=5;
	a = 3.24;
	b = 3.25;
	c = 5.45;
	result = sqart(a, b, c);
	printf("area is %lf", result);
	printf("a is %5.3f\n", a);
	printf("%5.3s", "chiandad");

	getch();
	return 0;
}

int main4(void)
{	
	int a;
	char b;
	float c;

	scanf("%d%c%f", &a, &b, &c);
	printf("%d, %c, %f", a,b,c);

	getch();
	return 0;
}

int main5(void)
{
	int a, b;
	float x, y;
	char c1, c2;

	scanf("a=%d b=%d", a, b);
	scanf("%f %e", &x, &y);
	scanf("%c%c", &c1, &c2);

	/*c1=getchar();
	c2=c1+32;
	putchar(c2);
	putchar('\n');
	*/
	getch();
	return 0;
}

int main(void)
{
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());

	putchar('\n'); 
	
	getch();
	return 0;
}
