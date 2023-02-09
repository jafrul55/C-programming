#include<stdio.h>
//Structure Declaration and Initialization
struct Student
{
    char name[100];
    int roll;
    int marks;

};

int main(){

struct Student a = {"Rakib",21,91};
// a is combine variable where have 3 data
printf("Name-%s Roll-%d Marks-%d\n",a.name,a.roll,a.marks);

return 0;
}
/*
**structure form:

struct  student
{

char name[100];
int roll
int class


}





*/
