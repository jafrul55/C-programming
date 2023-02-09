#include<stdio.h>
//File Related Functions in c
int main()
{
    FILE *inputFile;  //Here FILE is a datatype and inputFile is a pointer
    inputFile = fopen("input.txt","r");
    if(inputFile == NULL)
    {
        printf("No File Found\n");
        return 0;
    }

    FILE *OutputFile;
    OutputFile = fopen("Output2.txt","w");//Here mode is write
    //If output file become wrong .
    //Then it will create new output file in the containing folder
    //write mode dila output show somthing .Other wise  we use "r"

 //If you want to know that everything will read
 while(1)  //Because here 1 is true.Till true this loop will continue
 {
      char ch = fgetc(inputFile);  //input take gradually
       if(ch == EOF) // EOF-> is a macro of c programming.This mean 'End of File'
       {
           break;
       }
       fputc(ch,OutputFile); //In fputc there are two option-->what we keep and where we keep
      //ki rakbo,kotai rakbo
      //We can see the output in Output.txt from input.txt
 }

    return 0;
}
/*
fopen() function take two parameter
1.Kon file ar sata connection korbo
2.mode hoba

There are two mode available:
1.read
2.write

**Read shortcut "r"
**Write shortcut"w"



*/




