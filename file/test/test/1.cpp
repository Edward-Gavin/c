#include "stdio.h"
#include "stdlib.h"

int main(void)
{
	FILE *fp;
	char ch;


	if ((fp = fopen("1.txt", "w")) == NULL)
	{
		printf("Can't open this file. ");
		exit(0);
	}
	ch = getchar();
	printf("Please input a char in disk, end up with #");
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}


	fclose(fp);
	putchar(10);


	system("pause");
	return 0;
}