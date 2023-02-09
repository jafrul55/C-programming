#include<stdio.h>
//No return + No parameter:
//This is the use of four number function:

void  make_sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("%d\n",sum);
}

int main()
{
    make_sum();  // call the function
    return 0;
}

/*
*Function Formula:
(1)Return + Parameter
(2)No Return + Parameter
(3)Return + No parameter
(4)No Return + No Parameter


/This function is useful for test case.


*/


