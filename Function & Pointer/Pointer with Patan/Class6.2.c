#include<stdio.h>
//Function with pointers 2:
//Incase of pointer we can take return lot of value.
 void * send(int *ptr ,int *ptr2)//so address will come as a pointer
{
    *ptr = 100; //It will do dereference to do 100
    *ptr2 = 200;
}

int main()
{
    int x,y;
    send(&x,&y); //Call the address
    printf("%d %d\n",x,y);
    return 0;
}


