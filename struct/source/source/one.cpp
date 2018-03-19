#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main1(void)
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

int main2(void)
{
	struct Student
	{
		long num;
		char name[10];
		char sex;
		float score;
	};
	struct Student stu_1;
	struct Student *p;

	p = &stu_1;
	stu_1.num = 10101;
	strcpy_s(stu_1.name, "lilin");
	stu_1.sex = 'M';
	stu_1.score = 89.5;

	printf("No. %ld\nName: %s\nSex: %c\nScore: %5.1f\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
	printf("No. %ld\nName: %s\nSex: %c\nScore: %5.1f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
	printf("No. %ld\nName: %s\nSex: %c\nScore: %5.1f\n", p->num, p->name, p->sex, p->score);
	
	
	system("pause");
	return 0;
}

int main3(void)
{
	struct Student {
		int num;
		char name[10];
		char sex;
		int age;
	};

	struct Student stu[3] = {
		{10101,"liming",'M', 20},{10102, "lilei",'M', 21},{10103, "hanmeimei",'F', 22}
	};
	struct Student *p;
	printf("No.	name		sex	age\n");
	for (p = stu; p < stu + 3; p++)
		printf("%5d %-20s %2c %4d\n", p->num, p->name, p->sex, p->age);

	system("pause");
	return 0;
}

int main(void)
{

}