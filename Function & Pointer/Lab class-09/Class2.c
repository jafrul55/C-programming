#include<stdio.h>
//array Insert at any position:
int insert(int *a,int n,int pos,int val)
{
    for(int i = n-2;i >= pos;i--)  //ulta dik taka asba.
    {
        a[i+1] = a[i];  //ultta babe asa ai value k porar value ta transfer
         a[pos] = val;
    }
}


int main()
{
    int ar[7] = {5,10,2,3,14,20};  //we use last corner value in 6 position to insert value
    int pos,val;
    scanf("%d %d",&pos,&val);  //we use it to insert.
    insert(ar,7,pos,val);

    for(int i=0;i<7;i++)
    {
        printf("%d ",ar[i]);
    }


return 0;
}
