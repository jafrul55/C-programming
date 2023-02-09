#include<stdio.h>
//Array with pointers:
int main()
{
  //Now we will do jog/Biyog
  //You can use here char :
   char a = '0';
   char *p = &a;
   printf("%p %p",p,(p+1));//This is a character so it take 1 bit for execute value.
 //Here we use pointer and there are 4 bit different between two number
   return 0;
}

