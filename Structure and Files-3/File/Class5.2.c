#include<stdio.h>

int main()
{
    FILE * inputFile = fopen("input.txt","r");
    //input file check is a good practice
    //input file available or not?
    if(inputFile == NULL)
    {
        printf("Input not found\n");
        return 0;
    }
    FILE * outputFile = fopen("Output600.txt","w");
    //If file not found then out will create automatically
    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d\n",n);

    //Good practice is to close open file
    //as a software engineer it is very important to close file

    fclose(inputFile);
    fclose(outputFile);
    //This is good practice at lst fclose input and output

    return 0;
}
