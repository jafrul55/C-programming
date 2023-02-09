#include<stdio.h>
#include<stdbool.h>
#include<string.h>
//Sorting Array of Structure
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
    FILE * inputFile = fopen("input.txt","r");
    if(inputFile == NULL)
    {
        printf("NOT FOUND\n");
        return 0;
    }
    FILE *outputFile = fopen("output.txt","w");


    int n;
    fscanf(inputFile,"%d",&n);
    struct Student students[n];
     //Here unique student size will be highest
     struct Unique_Student unique_students[n];
     int k=0;
     for(int i=0;i<n;i++)
     {
         fscanf(inputFile,"%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
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
  //we start selection sort from here:

  for(int i=0;i<k-1;i++)
  {
      for(int j=i+1;j<k;j++)
      {
          //we use marks member to decorate big to small sort.
          //When we want [i] number will be Big that time it will do sort for small number of [i]
         if(unique_students[i].total<unique_students[j].total)  //Big to Small Mark will swap
         {
             struct Unique_Student temp = unique_students[i];
             unique_students[i] = unique_students[j];
             unique_students[j] = temp;

         }
      }
  }

     for(int i=0;i<k;i++)
     {
         fprintf(outputFile,"%s %d %d\n",unique_students[i].name,unique_students[i].id,unique_students[i].total);
     }
     //Best practice to close input and output files:
     fclose(inputFile);
     fclose(outputFile);

    return 0;
}

