#include<stdio.h>
//Pointer 'a' address ta jaba:
void change(int *ptr)  //a value will come here and become copy.
//we use it as a pointer
{
   printf("%d\n",ptr);
}
//If I use it as a pointer:
int main()
{
   int a=10;
   change(&a); //This will call to ptr;

   printf("%d\n",&a);
   return 0;
}
