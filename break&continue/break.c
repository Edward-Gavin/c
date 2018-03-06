#include <stdio.h>

int main(void)
{

	float amount, aver, total;
	int i;

	for (i = 1, total = 0; i <= 1000; i++)
	{
		printf("Please enter amount: ");
		scanf("%f", &amount);
		total = total + amount;
		if (total >= 100000)
			break;
	}
	aver = total / i;
	printf("number=%d\naver=%10.2f\n", i, aver);

	system("pause");
	return 0;
}