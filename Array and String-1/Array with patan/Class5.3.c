#include<stdio.h>
int main(){
//Sum,Max,Min and |Reverse| of an array:

//We will find Reverse value of array:
int ar[6] = {2,1,0,-5,10,5};

printf("Reverse value :");
//To find reverse value:
for(int i=5;i>=0;i--)
{
    printf("%d ",ar[i]);
}



return 0;
}

