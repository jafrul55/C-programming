#include<stdio.h>
int main(){
//|Sum| Max,Min and Reverse of an array:
//We will do sum:

int ar[6] = {2,1,0,-5,10,5};
int sum=0;
for(int i=0;i<6;i++)
{
    int val = ar[i];
    sum = sum + val;
    //or sum += val

}
printf("Sum = %d",sum);







return 0;
}
