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
    //We can use it for test case:

    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }







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



