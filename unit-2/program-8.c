// Program to demonstrate difference between structure and union

#include <stdio.h>

struct student
{
    int rollno;
    float score;
};

union data
{
    int rollno;
    float score;
};

int main()
{
    struct student s;
    union data u;

    printf("Size of structure: %lu\n", sizeof(s));
    printf("Size of union: %lu\n", sizeof(u));

    s.rollno = 10;
    s.score = 8.5;

    printf("\nStructure values:\n");
    printf("Rollno: %d\n", s.rollno);
    printf("Score: %.2f\n", s.score);

    u.rollno = 20;
    u.score = 9.5;

    printf("\nUnion values:\n");
    printf("Rollno: %d\n", u.rollno);
    printf("Score: %.2f\n", u.score);

    return 0;
}

