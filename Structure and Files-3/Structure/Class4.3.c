#include<stdio.h>
//Function and Structure
//we use here pointer in the main function and call that as a parameter
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
void fun(struct Student *st)
{   
    //(*st).marks = 1000;
    //if you feeling hard then you can use it easily like below
     st->marks = 1000;  //this is the shortcut of (*st) pointer
     //It means first do dereferance(*st) then go to in the marks
}

int main()
{
    struct Student a ={"Rakib",21,82};

    fun(&a);  //call in the parameter as a pointer
    print_struct(a); // call to print_struct

return 0;
}


