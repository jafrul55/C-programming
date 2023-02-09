#include<stdio.h>
int main(){
//sizeof and memset:
int n;
scanf("%d",&n);
int ar[n];
printf("%d",sizeof(ar)/sizeof(ar[0])); //to count the size

// 60/4 =15



return 0;
}

