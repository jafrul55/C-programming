#include<stdio.h>
//Fcanf() And Fprintf()
int main()
{
    FILE * inputFile;
    FILE * OutputFile;
    inputFile = fopen("input2.txt","r"); //if input file become unknown

    if(inputFile == NULL)
    {
        //If we write it in normal printf
        printf("Not Found"); //It will print normal in terminal
        return 0;
    }
     OutputFile = fopen("Output.txt","w");

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
    //Remember everytime that is input properly working or not

    return 0;
}

