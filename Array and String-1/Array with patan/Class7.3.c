#include<stdio.h>
int main(){
//sizeof and memset:
int n;
scanf("%d",&n);
int ar[n];
//we can find array initialize size without memset:
for(int i=0;i<n;i++)
{
    ar[i] = 0;
}
for(int i=0;i<n;i++)
{
    printf("%d ",ar[i]);


}
return 0;
}
