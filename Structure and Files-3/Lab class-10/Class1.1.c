#include<stdio.h>
//Get Current Total Marks of All Student
//Now we will find sum or Total of student
struct Student
{
    char name[100];
    int id;
    int marks;
    int total;
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
        int sum = 0;  //For every student sum is zero

        for(int j=0;j<i;j++)  // it will go previous j to i position
        {
            if(students[i].id == students[j].id)
                //we will compare i index with j all index to find similar or not
            {
              sum += students[j].marks; //Do the sum of j marks
            }


        }

         //it will sum of two marks i,j;
            int new_sum = students[i].marks + sum;

            students[i].total = new_sum;
            //we will store new_sum int total
    } 

    //Now print it
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d %d\n",students[i].name,students[i].id,students[i].marks,students[i].total);
        //we also print here total
    }



    return 0;
}


