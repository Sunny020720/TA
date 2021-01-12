#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct info
{
	char name[20];
	int age,score;
};
struct info train(struct info student)
{
	if(student.score <= 500)
	{
		student.score = (student.score * 6) / 5;
	}
	else
	student.score = 600;
	student.age += 1;
	return student;
}

struct info input(struct info student)
{
	scanf("%s %d %d",student.name,&student.age,&student.score);
	return student;
}
void output(struct info student)
{
	printf("%s %d %d\n",student.name,student.age,student.score);
}
 
int main(){
	int i1,n;
	scanf("%d",&n);
	struct info student[n];
	for(i1 = 0;i1 < n;i1++)
	{
		student[i1] = input(student[i1]);
		student[i1] = train(student[i1]); 
		output(student[i1]);
	}
	return 0;
}

