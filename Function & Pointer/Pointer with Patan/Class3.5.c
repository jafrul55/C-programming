#include<stdio.h>
//Array With pointers:
int main(){
int a[5] = {10,20,30,40,50};
//Now we will use array in pointer:
printf("%d %d %d\n",*a,*(a+1),*(2+a));


return 0;
}
