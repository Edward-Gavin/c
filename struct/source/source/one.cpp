#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void)
{
	struct Date {
		int day;
		int month;
		int year;
	};

	struct Student {
		int num;
		char name[20];
		char sex;
		int age;
		float score;
		struct Date birth;
	};

	struct Student students_1, students_2;

	students_1 = { 1, "liming", 'm', 22, 56, {4,5,2000} };
	printf("number: %d\n", students_1.num);
	printf("name: %s\n", students_1.name);


	system("pause");
	return 0;
}