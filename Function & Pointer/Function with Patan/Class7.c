#include<stdio.h>
//Global Variable,Function Declaration again.
//Global Variable
//we use global bariable to excess from anywhere.
//This is a matter of scope
int a;  //This is a global variable
void check()
{
    a = 10;
}

int main()
{
    a=100;  //Though a value first 100 but output 10
    check();
    printf("%d",a);
    return 0;
}

/*
when a variable stay in any position that is his scope.
#include <stdio.h>
void check ()
{-----------

   int n=10;  //This is a scope
}-------------

void main()
{

   printf("%d",a);   //This is not work because it is out of scope
   return 0;

}





*/
