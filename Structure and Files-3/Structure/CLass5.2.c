#include<stdio.h>
//Array of Structure
//If you want to take an array as a pointer and change any value in function:
struct Student
{
    char name[100];
    int roll;
    int marks;
};

void print_struct(struct Student a)
{
     printf("%s %d %d\n",a.name,a.roll,a.marks);
}

void fun(struct Student *a)
{
    a[0].marks = 100;  //we will change zero index mark
    a[1].roll = 5000;  //we will change one index roll
}

int main()
{
     //we use here array for structure
     struct Student a[3];
     for(int i=0;i<3;i++)
     {
         scanf("%s %d %d",&a[i].name,&a[i].roll,&a[i].marks);
         //Here a[i] are student variable name
     }
     //we call fun function below
      fun(a);

     printf("\n");

      for(int i=0;i<3;i++)
     {
       print_struct(a[i]);


     }



}


