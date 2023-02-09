#include<stdio.h>
//Function and Structure
//Now we will use it as a pointer
struct Student
{
     char name[100];
     int roll;
     int marks;
};
//we can make a function for print:
void print_struct(struct Student a) // receive as name a
{
    printf("%s %d %d\n",a.name,a.roll,a.marks);
}
//Here take a function without return;
void fun(struct Student *st) //receive a as a pointer
{
     (*st).marks = 1000;  //you have to use here (*st) to change marks value
     //Otherwise it won't work.

}
//Now we will use it as a pointer:
int main()
{
    struct Student a ={"Rakib",21,82};

    fun(&a);  //call in the parameter as a pointer address
    print_struct(a); // call to print_struct

return 0;
}


