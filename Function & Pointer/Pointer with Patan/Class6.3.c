#include<stdio.h>

//we can return one value:
int send()
{

    return 100;
}

int main()
{
    int x,y;
    x = send();
    printf("%d %d\n",x,y);
    return 0;
}
