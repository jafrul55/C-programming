#include<stdio.h>
#include<string.h>
//Introduction to structure:
//if we take 2 student

int main(){
char name1[100]="Rakib",name2[100]="Sakib";
int roll1=21,roll2=29;
int mark1=82,mark2=90;

if(mark1>mark2)
{
    //student1 got highest marks
    printf("%s %d %d\n",name1,roll1,mark1);

}

else
{
     //student2 got highest marks
     printf("%s %d %d\n",name2,roll2,mark2);
}

return 0;
}
/*

structure is a (user define data type).
it is a prototype.
prototype mean small type of datatype

** To create a Structure
we need inbuid datatype:
int,float,array etc..

**Basically Structure is a group of variables
-of different data types represented by a single name















*/

