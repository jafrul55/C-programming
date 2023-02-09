#include<stdio.h>
//File Related Functions in c
int main()
{
    FILE *inputFile;  //Here FILE is a datatype and inputFile is a pointer
    inputFile = fopen("input.txt","r");

 //If you want to know that everything will read
 while(1)  //Because here 1 is true.Till true this loop will continue
 {
      char ch = fgetc(inputFile);  //input take gradually
       if(ch == EOF) // EOF-> is a macro of c programming.This mean 'End of File'
       {
           break;
       }
      printf("%c",ch); //input.txt all character will print.as a character
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


