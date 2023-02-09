#include<stdio.h>
int main(){
//Introduction to string:
//Now we work with character by taking input and print output:
char ar[5];
//Taking input here:
for(int i=0;i<5;i++)
{
    scanf("%c",&ar[i]);   //character never input by space.input: abcde
}

//print here:

for(int i=0;i<5;i++)
{
    printf("%c ",ar[i]);
}








return 0;
}
/*
*if i write in a single quotation then it is a character:
 'h' -->character
 "h" --> String

2--> integer
'2'--> character
"2" --> string
"@ & ! _" -->String

incase of string last space autometically take a null character = '\0'




*/


