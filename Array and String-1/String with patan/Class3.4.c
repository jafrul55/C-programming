#include<stdio.h>
#include<string.h>
int main(){
//|strlen|,strcpy,strcat,strcmp functions:
//we use strlen() to count string length:
//But first we try to find length using for loop:
int index;
char ar[100];
scanf("%s",&ar);
//If we assign '\0' in any index then output will be same index position:
ar[2] = '\0';

for(index=0;ar[index]!= '\0';index++)
{
//But this loop is not looking good
}
printf("%d",index);




return 0;
}
/*
array size: sizeof(ar)/sizeof(ar[0]);




*/


