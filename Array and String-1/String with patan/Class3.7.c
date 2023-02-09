#include<stdio.h>
#include<string.h>
int main(){
//strlen,strcpy,|strcat|,strcmp functions:
//we use strcat() function (concatenation) to attch one character with other character:
char a[100],b[100];
scanf("%s %s",&a,&b);

strcat(a,b);
printf("%s %s",a,b);



return 0;
}




