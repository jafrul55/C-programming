#include<stdio.h>
#include<string.h>
int main(){
//String palindrome using Two pointer technique:
char a[100];
scanf("%s",&a);
int i = 0,j=strlen(a)-1;
int c=0;
//This is called two point technique:
while(i<j)
{
    if(a[i] != a[j])
    {
        printf("No\n");
        c=1;
        break;

    }
    i++;
    j--;

}
if(c == 0){

   printf("Yes\n");

}




return 0;
}

/*
Palindrom:
 1.Left to Right---->same
   same<------Right to Left.

palindrom:left to rigth and right to lest same character.


In case of Even palindrom as a two pointer technic:

      a     b   c  |  c    b    a
     i=0  i=1  i=2 | j=3  j=4  j=5

     always : i<j


Even technic:
     m  a   d   a  m
    i=0 i=1 |   j=4 j=5
      i<j
*/

