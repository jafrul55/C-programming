#include<stdio.h>
//Structure Input and Output:
struct student
{
    char name[100];
    int roll;
    int marks;

};
//Structure Input and Output:
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    //Take input and also print it without save
      struct student a;
       scanf("%s %d %d",&a.name,&a.roll,&a.marks);
       printf("%s %d %d\n",a.name,a.roll,a.marks);
   }

    return 0;
}
