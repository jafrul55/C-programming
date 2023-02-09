#include<stdio.h>
//Fscanf() And Fprintf()
int main()
{
    FILE * inputFile;
    FILE * OutputFile;
    inputFile = fopen("input2.txt","r"); //if input file become unknown
    OutputFile = fopen("Output.txt","w");
    if(inputFile == NULL)
    {
        //Look at your output file
        fprintf(OutputFile,"Not Found"); //it will print output in output file
        return 0;
    }


    int n;
    fscanf(inputFile,"%d",&n);   //Here will be fscanf
    //inputFile take akta value nou
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        fscanf(inputFile,"%d",&a);  //Here will be fscanf
        //inputFile take akta value nau
        sum +=a;

    }
    fprintf(OutputFile,"sum-> %d",sum); //Here will be fprintf
    //Output a print kora dakau
}
