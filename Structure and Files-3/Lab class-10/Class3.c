#include<stdio.h>
#include<stdbool.h>
#include<string.h>
//Get total marks of all unique students
struct Student
{
    char name[100];
    int id;
    int marks;
};

struct Unique_Student
{
    char name[100];
    int id;
    int total;
};

int main()
{

    int n;
    scanf("%d",&n);
    struct Student students[n];
     //Here unique student size will be highest
     struct Unique_Student unique_students[n];
     int k=0;
     for(int i=0;i<n;i++)
     {
         scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
         bool found = false;
         for(int j=0;j<k;j++)
         {
             if(unique_students[j].id == students[i].id)
             {
                 unique_students[j].total += students[i].marks;
                 found = true;
             }
         }

         if(found == false)
         {
              //we cannot assign array but we can copy array from students[i] to  unique students.

            strcpy(unique_students[k].name,students[i].name);
            unique_students[k].id = students[i].id;
            unique_students[k].total = students[i].marks;
            k++;
         }
     }


     for(int i=0;i<k;i++)
     {
         printf("%s %d %d\n",unique_students[i].name,unique_students[i].id,unique_students[i].total);
     }

    return 0;
}
