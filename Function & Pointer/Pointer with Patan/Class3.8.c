#include<stdio.h>
//Array With pointers:
int main(){
int a[5] = {10,20,30,40,50};
//You can use here loop
for(int i=0;i<5;i++)
{
    printf("%d ",*(a+i));
}
return 0;
}
/*
you can do the same act in different angle:

#include<stdio.h>
/Array With pointers:
int main(){
int a[5] = {10,20,30,40,50};
int *ptr = a;
/You can use here loop
for(int i=0;i<5;i++)
{
    printf("%d ",*(ptr));
    ptr++;
}
return 0;
}







*/



