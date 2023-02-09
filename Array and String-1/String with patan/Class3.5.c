#include<stdio.h>
#include<string.h>
int main(){
//|strlen|,strcpy,strcat,strcmp functions:
//we use strlen() function to count string length(character length):

char ar[100];
scanf("%s",&ar);
//ar[2] = '\0';

int length = strlen(ar);
printf("%d",length);




return 0;
}
/*
array size: sizeof(ar)/sizeof(ar[0]);




*/


