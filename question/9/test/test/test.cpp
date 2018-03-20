#include "stdio.h"
#include "stdlib.h"


int main1(void)
{

	struct Student {
		int year;
		int month;
		int day;

	}date;

	int i, days;
	int day_tab[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("Please input year, month, day: \n");
	scanf_s("%d,%d,%d", &date.year, &date.month, &date.day);
	days = 0;
	for (i = 1; i < date.month; i++)
		days = days + day_tab[i];
	days = days + date.day;
	if ((date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0) && date.month >= 3)
		days = days + 1;
	printf("%d/%d is the %dth day in %d. \n", date.month, date.day, days, date.year);

	system("pause");
	return 0;
}

struct y_m_d {
	int year;
	int month;
	int day;
}date;

int main2(void)
{
	int days(struct y_m_d date1);
	printf("Input year, month, day: \n");
	scanf_s("%d,%d,%d", &date.year, &date.month, &date.day);
	printf("%d/%d is the %dth day in %d. \n", date.month, date.day, days(date), date.year);

	system("pause");
	return 0;
}

int days(struct y_m_d date1)
{
	int sum;
	switch (date1.month)
	{
	case 1:sum = date1.day; 
		break;
	case 2: sum = date1.day + 31;
		break;
	case 3: sum = date1.day + 59;
		break;
	case 4: sum = date1.day + 90;
		break;
	case 5: sum = date1.day + 120;
		break;
	case 6: sum = date1.day + 151;
		break;
	case 7:sum = date1.day + 181;
		break;
	case 8: sum = date1.day + 212;
		break;
	case 9: sum = date1.day + 243;
		break;
	case 10: sum = date1.day + 273;
		break;
	case 11: sum = date1.day + 304;
		break;
	case 12: sum = date1.day + 334;
		break;
	}

	if ((date1.year % 4 == 0 && date1.year % 100 != 0 || date1.year % 400 == 0) && date1.month >= 3)
		sum += 1;
	return (sum);
}

struct Students {
	char num[6];
	char name[10];
	int score[4];
};

int main(void)
{
	
	void print(struct Students stu[6]);
	struct Students stu[5];
	int j, i;

	for (i = 0; i < 5; i++)
	{
		printf("\nInput score of student %d\n",i+1);
		printf("No.: ");
		scanf_s("%s", stu[i].num);
		printf("Name: ");
		scanf_s("%s", stu[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("Score: %d", j + 1);
			scanf_s("%d", &stu[i].score[j]);
		}
		printf("\n");

	}
	print(stu);

	system("pause");
	return 0;
}

void print(struct Students stu[6])
{
	int i, j;
	printf("\n No. name score1 score2 score3\n");
	for (i = 0; i < 5; i++)
	{
		printf("%5s%10s", stu[i].num, stu[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("%9d",stu[i].score[j]);
		}
		printf("\n");
	}
}

int main3(void)
{



	system("pause");
	return 0;
}