#include<stdio.h>
#include<string.h>
int main(){
//|strlen|,strcpy,strcat,strcmp functions:
//we use strlen() to count string length:
//But first we try to find length using while loop:

char ar[100];
scanf("%s",&ar);
int index=0;
while(ar[index]!= '\0')
{
    index++;
}
printf("%d",index);







return 0;
}
/*
array size: sizeof(ar)/sizeof(ar[0]);




*/
