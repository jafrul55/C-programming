#include<stdio.h>
//Array of Structure
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

int main()
{
     //we use here array for structure
     struct Student a[3];
     for(int i=0;i<3;i++)
     {
         scanf("%s %d %d",&a[i].name,&a[i].roll,&a[i].marks);
         //Here a[i] are student variable name
     }

      for(int i=0;i<3;i++)
     {
       print_struct(a[i]);


     }


}
