#include<stdio.h>
#include<string.h>y
int main(){
//Introduction to function:
char str1[100],str2[100];
scanf("%s %s",&str1,&str2);
//For count the first string:
int index = 0;

while(str1[index] != '\0')
{
    index++;
}

printf("Length of str1 --> %d\n",index);

//For count the second string:

 index = 0;
 while(str2[index]!= '\0')
 {
     index++;
 }

 printf("Length of str2 --> %d\n",index);

//If we use same process for more than string.
//Then it is very Lengthy/Boring process
//so we will use strlen() fuction to reduce the hassel

return 0;
}
/*
/If we use same process for more than string.
/Then it is very Lengthy/Boring process
/so we will use strlen() fuction to reduce the hassel








*/
