#include<stdio.h>
//File Related Functions in c
int main()
{
    FILE *inputFile;  //Here FILE is a datatype and inputFile is a pointer
    inputFile = fopen("input.txt","r");
    char ch = fgetc(inputFile); //sha akta character read korba
   //we save it in ch
   printf("%c",ch); //if we keep c character in input.txt file then it will print c
    return 0;
}
/*
fopen() function take two parameter
1.Kon file ar sata connection korbo ("input.txt")
2.mode hoba("r")

There are two mode available:
1.read
2.write

**Read shortcut "r"
**Write shortcut"w"



*/
