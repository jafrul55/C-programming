#include<stdio.h>
//Now we use here array
void change(int *ptr) //it will copy a[2] address and print it
{
    *ptr = 1000;
    //you can do second index;
    //*(ptr+2) = 1000;
}
int main()
{
    int a[3] = {1,2,3};
    change(a);
    printf("%d %d %d\n",a[0],a[2],a[3]);
    //Here  first index value a[0] will be change but other will be same
}

