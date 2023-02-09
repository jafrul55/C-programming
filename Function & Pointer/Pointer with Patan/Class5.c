#include<stdio.h>

void change(int x)  //a value will come here and become copy
{
    x = -100; //But here nothing will be happen
}
int main()
{
   int a=10;
   change(a); //This will call to int x;
   printf("%d\n",a);
}
