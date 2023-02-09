#include<stdio.h>
#include<string.h>
//Structure Declaration and Initialization
//But incase of string we can initailize but cannot assign
//so we can copy a string to change a string
struct Student
{
    char name[100];
    int roll;
    int marks;

};

int main(){
//If you do not want to maintain sequence for roll and marks
//then just direct to roll and mark
struct Student a = {"Rakib",.marks= 21,.roll=91};
// a is combine variable where have 3 data
//we directly assign value without sequence of roll and marks.

//we can copy string to change:
strcpy(a.name,"Jafrul");

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


