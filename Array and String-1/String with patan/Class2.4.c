#include<stdio.h>
int main(){
//string Input Output:
char ar[18];
//If you want to input full line then we use gets/fgets function:
gets(ar);
//you can also use fgets() function:
//fgets(ar,18,stdin);
//fgets() function more acurate

printf("%s",ar);



return 0;
}

