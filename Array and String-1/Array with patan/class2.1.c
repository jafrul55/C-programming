#include<stdio.h>
int main(){
//Array Declaration:
long long ar[5];
printf("%d\n",&ar[0]);
printf("%d\n",&ar[1]);
printf("%d\n",&ar[2]);     //incase of long long variable type it's take 8 byte.
printf("%d\n",&ar[3]);
printf("%d\n",&ar[4]);

/*
arr[3] = 0 + (3*8)
       = 24


64220 00
64220 08
64220 16
64220 24  <--
64220 32








*/









return 0;
}

