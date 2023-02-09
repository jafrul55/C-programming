#include<stdio.h>
#include<string.h>
int main(){
//Check if a string is palindrome:
char a[100],b[100];
scanf("%s",&a);

strcpy(b,a);
strrev(b);

for(int i=0;i<strlen(a);i++)
{
    if(a[i] != b[i])
    {
        printf("No\n");
        return 0;
    }
}

printf("Yes\n");












return 0;
}

/*
Palindrom:
 1.Left to Right---->same
   same<------Right to Left.

palindrom:left to rigth and right to lest same character.








*/
