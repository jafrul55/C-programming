#include<stdio.h>
//Fclose() Function And Good Practices
int main()
{
    FILE *inputFile = fopen("input100.txt","r");  //input file
//But good practice is using below method:
//If we can not find txt file
    if(inputFile == NULL)
    {
        return 0;
    }

    FILE *outputFile = fopen("Output.txt","w"); //output file

    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d\n",n);

    return 0;
}

