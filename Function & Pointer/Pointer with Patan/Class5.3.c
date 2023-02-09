#include<stdio.h>
//Here 'a' value will copy int ptr pointer but it will print *ptr value
//a value will change
void change(int *ptr)
{
    *ptr = -100;
}
int main()
{
    int a=10;
    change(&a);
    printf("%d\n",a);
    return 0;
}
