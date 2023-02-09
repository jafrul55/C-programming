#include<stdio.h>
//Fscanf() And Fprintf() Function
int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt","r");
    if(inputFile == NULL)
    {
        printf("Not found");
        return 0;
    }
    outputFile = fopen("Output.txt","w");

    int n;
    fscanf(inputFile,"%d",&n); //Here will be fscanf
      //inputFile take akta value nou
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        fscanf(inputFile,"%d",&a);  //Here will be fscanf
         //inputFile take akta value nou

        sum += a;
    }

    fprintf(outputFile,"Sum-> %d",sum); //Here will be fprintf
    //Output a print kora dakau

    return 0;

}
