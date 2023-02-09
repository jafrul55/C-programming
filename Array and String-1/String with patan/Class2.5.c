#include<stdio.h>
int main(){
//string Input Output:
char ar[18];
//If you want to input full line with acurate then we use fgets function:
fgets(ar,18,stdin);


printf("%s",ar);



return 0;
}

/*
Input and output incase of string:
scanf("%s");
printf("%s");
it's takes all line with space
gets(ar);
fgets(ar,5,stdin);

at last we use null character (\0)
*/



