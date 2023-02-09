#include<stdio.h>
#include<string.h>
//structure Declaration and Initialization
//you can take an array input and print that array incase of structure
struct Student
{
    char name[100];
    int roll;
    int marks;
    int last_marks[100];

};

int main(){
//If you do not want to maintain sequence for roll and marks
//Then just direct to roll and mark
struct Student a = {"Rakib",.marks= 21,.roll=91};
// a is combine variable where have 3 data
//we direct here to assign without sequence of roll and marks.
//array input:
for(int i=0;i<5;i++)
{
     scanf("%d",&a.last_marks[i]);
}


printf("Name-%s Roll-%d Marks-%d\n",a.name,a.roll,a.marks);

for(int i=0;i<5;i++)
{
     printf("%d ",a.last_marks[i]);
}

return 0;
}
/*
**structure form:

struct  student
{

char name[100];
int roll
int class
int array[100];


};





*/



