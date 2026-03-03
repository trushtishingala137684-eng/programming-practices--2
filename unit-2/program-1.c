//structure student data
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    int year;
    char department[40];
    float score;
};
int main()
{
    struct student s;
    printf("enter roll no:");
    scanf("%d",&s.rollno);

    printf("enter name :");
    scanf("%s",s.name);

    printf("enter department:");
    scanf("%s",s.department);

    printf("enter the year of joining:");
    scanf("%d",&s.year);

    printf("enter score :");
    scanf("%f",&s.score);

    printf("\n student details:\n");
    printf("roll no:%d\n",s.rollno);
    printf("name:%s\n",s.name);
    printf("department:%s\n",s.department);
    printf("year:%d\n",s.year);
    printf("score:%f\n",s.score);

    return 0;
}


