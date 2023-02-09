#include<stdio.h>
//Get Current Total Marks of All Student
//Take input and print output as array in structure
struct Student
{
    char name[100];
    int id;
    int marks;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student students[n]; //Make a array
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        //Take input as a array using structure

    }

    //Now print it
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d\n",students[i].name,students[i].id,students[i].marks);
    }



    return 0;
}
