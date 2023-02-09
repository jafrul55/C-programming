#include<stdio.h>
int main(){
//Array initialization:
//if I decrease one index from  space then output in that space will be 0.
int ar[5] = {10,20,30,40};
//int ar[5] = {0};


for(int i=0;i<5;i++)
{
    printf("%d ",ar[i]);
}



return 0;
}

