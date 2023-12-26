#include<stdio.h>
#include<string.h>

    struct student
    {
        char name[100];
        int roll;
        float cgpa;
    };
int main()
{
    struct student s1;
        strcpy(s1.name,"shradha");
        s1.roll=1664;
        s1.cgpa=9.8;

        printf("student name is %s\n",s1.name);
        printf("student roll is %i\n",s1.roll);
        printf("student cgpa is %f\n",s1.cgpa);
        return 0;

    
}
