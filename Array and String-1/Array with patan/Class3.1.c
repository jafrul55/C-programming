#include<stdio.h>
int main(){
//array input and output:
int ar[5];
//using loop take input:

for(int i=0;i<5;i++)
{

   scanf("%d",&ar[i]);

}

//print output using loop
for(int i=0;i<5;i++)
{
    printf("%d ",ar[i]);
}


return 0;
}
//Don't go out of index...0,1,2,3,4,5....
