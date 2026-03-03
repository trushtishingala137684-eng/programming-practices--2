//sort by score in descending order
#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    char department[40];
    int year;
    float score;
};

int main()
{
    struct student s[5], temp;
    int i, j;

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

    for(i = 0; i < 4; i++)
    {
        for(j = i+1; j < 5; j++)
        {
            if(s[i].score < s[j].score)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n---- Students Sorted by Score (Descending) ----\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nRoll no: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].department);
        printf("Year: %d\n", s[i].year);
        printf("Score: %.2f\n", s[i].score);
    }

    return 0;
}

