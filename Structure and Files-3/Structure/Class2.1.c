#include<stdio.h>
//structure Declaration and Initialization
struct Student
{
    char name[100];
    int roll;
    int marks;

};

int main(){
//If you do not want to maintain sequence for roll and marks
//then just directly assign roll and mark
struct Student a = {"Rakib",.marks= 21,.roll=91};
             //we directly assign value without sequence of roll and marks
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

