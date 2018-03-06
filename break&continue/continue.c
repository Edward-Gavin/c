#include <stdio.h>

int main(void)
{
	int n;
	for (n = 100; n <= 200; n++)
	{
		if (n % 3 == 0)
			continue;
		printf("%d", n);
	}
	printf("\n");

	system("pause");
	return 0;
}