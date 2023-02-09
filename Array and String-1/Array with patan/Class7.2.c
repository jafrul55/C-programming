#include<stdio.h>
int main(){
//sizeof and memset:
int n;
scanf("%d",&n);
int ar[n];
//memset function--> mean memory set:menset(array_name,same value(0),size)
//Actually we use it to set size to initialization like = {0,0,0,0,0}
memset(ar,0,sizeof(ar));
for(int i=0;i<n;i++)
{
    printf("%d ",ar[i]);


}
return 0;
}

