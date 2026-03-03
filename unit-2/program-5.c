//short by score in descending order
#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    char department[40];
    int year;
    float score;
};

void printAboveFive(struct student s[], int n)
{
    int i;
    printf("\nStudents having score greater than 5.0:\n");

    for(i = 0; i < n; i++)
    {
        if(s[i].score > 5.0)
        {
            printf("%s\n", s[i].name);
        }
    }
}

int main()
{
    struct student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll no: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Department: ");
        scanf("%s", s[i].department);

        printf("Year: ");
        scanf("%d", &s[i].year);

        printf("Score: ");
        scanf("%f", &s[i].score);
    }

    printAboveFive(s, 5);

    return 0;
}
