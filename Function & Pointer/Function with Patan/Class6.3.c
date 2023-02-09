#include<stdio.h>
//No return + No parameter:
//This is the use of four number function:

//We can use test case

void  take_array(void)
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

int main()
{
    //We can use function for test case:

    int test;
    scanf("%d",&test);
    while(test--) // 5,4,3,2,1,0
    //we can use here while loop to understand carefully
    {
        take_array();  //we just call here the function
        //This function no any return type or no any parameter
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





