#include<stdio.h>
#include<string.h>
int main(){
//Introduction to function:
//Now we will use here strlen() function:
char str1[100],str2[100];
scanf("%s %s",&str1,&str2);
//For count the first string:
int Length1 = strlen(str1);
printf("Length of str1 --> %d\n",Length1);

//For count the second string:

int Length2 = strlen(str2);
 printf("Length of str2 --> %d\n",Length2);

return 0;
}
/*
/If we use same process for more than string.
/Then it is very Lengthy/Boring process
/so we will use strlen() fuction to reduce the hassel
/Function is a certain block where some instruction available.
/When I call to function that time it will give me something or not.







*/
