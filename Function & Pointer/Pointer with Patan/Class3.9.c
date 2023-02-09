#include<stdio.h>
//Array With pointers:
int main(){
//you can do the same act in different angle:
int a[5] = {10,20,30,40,50};  //array k samona naya jai na
int *ptr = a;
//You can use here loop
for(int i=0;i<5;i++)
{
    printf("%d ",*(ptr));
    ptr++;  //This is a constant pointer so we cannot skip to go forward
}
return 0;
}

