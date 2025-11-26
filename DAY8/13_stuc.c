#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int roll_num;
    int marks;
}st1,st2;
int main()
{
    strcpy(st1.name,"MURLI");
    st1.marks=12;
    st1.roll_num=101;
    printf("Student 1 details: \n");
    printf("Name: %s\n",st1.name);
    printf("Roll no: %d\n",st1.roll_num);
    printf("Marks : %d\n",st1.marks);

    strcpy(st2.name,"prasad");
    st2.marks=20;
    st2.roll_num=102;
    printf("Student 2 details: \n");
    printf("Name: %s\n",st2.name);
    printf("Roll no: %d\n",st2.roll_num);
    printf("Marks : %d\n",st2.marks);

}
