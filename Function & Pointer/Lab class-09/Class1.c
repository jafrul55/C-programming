#include<stdio.h>
//Array Reverse Function:
//This is a two pointer Technique:
void reverse(int *a,int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
      int temp = a[i];  //we use here swaping
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int ar[] = {5,10,2,3,14,56,12,14,17,18};
    reverse(ar,10);  //here array and size
    for(int i=0;i<10;i++)
    {
        printf("%d ",ar[i]);
    }
}


/*
array will pass as a pointer so reverse do not need any return value.





*/
