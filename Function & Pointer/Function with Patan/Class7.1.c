#include<stdio.h>
//Global Variable,Function Declaration again.
//Global Variable
//we use global variable to excess from anywhere.
//This is a matter of scope
void check(int a) // (int a) is a copy of x
{
    a = 10;
}

int main()
{
    int x = 100;  //In this case  x value will print here
    check(x);
    printf("%d",x);
    return 0;
}