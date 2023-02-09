#include<stdio.h>
int main(){
//Variable size array:
int size;
scanf("%d",&size);
int ar[size];

//But you can not do initialize here: int ar[size] = {0};
//So we will initialize value using for loop:
for(int i = 0;i < size;i++)
{
    scanf("%d",&ar[i]);
}
//Now we will print here:
for(int i = 0;i < size;i++)
{
    printf("%d ",ar[i]);
}








return 0;
}
