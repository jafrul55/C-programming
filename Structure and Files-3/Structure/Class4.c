#include<stdio.h>
//Function and Structure
struct Student
{
     char name[100];
     int roll;
     int marks;
};
//Here take a function without return;
void fun(struct Student st)
{
     st.marks = 100;
     //st assign never work here.
     //100 never work here.
     //st has no connection with a
}

int main()
{
    struct Student a ={"Rakib",21,82};

    fun(a);  //call in the parameter

   printf("%s %d %d\n",a.name,a.roll,a.marks);





return 0;
}
