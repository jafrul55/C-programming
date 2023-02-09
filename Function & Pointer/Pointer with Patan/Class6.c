#include<stdio.h>
//Function with pointers 2:
//We can take return from function.
 void * send(int *ptr)//so address will come as a pointer
{
    *ptr = 100;
}

int main()
{
    int x;
    send(&x);
    printf("%d\n",x);
    return 0;
}
