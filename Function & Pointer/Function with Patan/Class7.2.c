#include<stdio.h>
//Function  Declaration
//But this is time consume
void print(int var);  //Type name (parameter)
int main()
{
    int x = 100;
    print(x);
    return 0;
}

void print(int var)
{
    printf("%d",var);
}
