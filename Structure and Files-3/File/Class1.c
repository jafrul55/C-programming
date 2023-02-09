#include<stdio.h>
//Working With Files From Command Line
//Kicho songka jogfol korba:

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        sum += a;
    }
    printf("Sum-> %d ",sum);



   return 0;
}
/*
you can take value from terminal and print it.
incase of input we use:
  <input.txt

incase of output we use:
  >Output.txt




*/
