#include<stdio.h>
int main(){
//Counter Array:
int n;
scanf("%d",&n);
int ar[n];

for(int i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
}
int count1 = 0,count2 = 0;

for(int i=0;i<n;i++)
{
    int val= ar[i];
    if(val == 2)
    {
        count1++;
    }

    if(val == 1)
    {
        count2++;
    }
}

printf("Val[1 number] = %d val[2number] = %d",count1,count2);






return 0;
}
