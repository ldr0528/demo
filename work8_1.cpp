#include <stdio.h>

struct Student{
	int studentID;
	char name[50];
	char gender;
};

int main()
{
	struct Student student;
	scanf("%d %s %c",&student.studentID,student.name,&student.gender);
	printf("%d %s %c",student.studentID,student.name,student.gender);
	
}
