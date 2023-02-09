#include<stdio.h>
//Fclose() Function And Good Practices
int main()
{
    FILE *inputFile = fopen("input.txt","r");  //input file
    FILE *outputFile = fopen("Output.txt","w"); //output file

    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d\n",n);

    return 0;
}
