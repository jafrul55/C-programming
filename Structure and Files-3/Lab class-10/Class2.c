#include<stdio.h>
//Get Total Marks of 2 Unique Student

struct Student
{
    char name[100];
    int id;
    int marks;
};
//structure for unique student:
struct Unique_student
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
    //we will initiate here two name and id:
    //Here are two unique student:
    struct Unique_student rakib = {"Rakib",17256,0};
    struct Unique_student sakib = {"Sakib",17259,0};

    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);

        if(students[i].id == rakib.id)
        {
            rakib.total += students[i].marks;
        }
        else
        {
            sakib.total += students[i].marks;
        }
    }

    printf("\n");

    printf("%s %d %d\n%s %d %d\n",rakib.name,rakib.id,rakib.total,sakib.name,sakib.id,sakib.total);



    return 0;
}
