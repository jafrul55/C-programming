#include<stdio.h>
//Pointer a address ta jaba:
void change(int *ptr)  //a value will come here and become copy.
//we use it as a pointer
{
    //If we use here * before ptr then it will print 10.
    //Because  ptr will go to address of a. so it will print 10.
   printf("%d\n",*ptr);
}
//If I use it as a pointer:
int main()
{
   int a=10;
   change(&a); //This will call to int x;

   printf("%d\n",&a);
   return 0;
}

