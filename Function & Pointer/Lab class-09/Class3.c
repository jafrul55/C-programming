#include<stdio.h>
//Array Remove at any position:
void array_delete(int *a,int n,int pos)
{
    for(int i=pos+1;i<n;i++)
    {
        a[i-1] = a[i]; // agar position a porar index ar value rakbo

    }
}

int main(){
int ar[6] = {10,20,30,40,50,60};
int pos;
scanf("%d",&pos);
array_delete(ar,6,pos);

for(int i=0;i<5;i++)
{
    printf("%d ",ar[i]);
}




return 0;
}
