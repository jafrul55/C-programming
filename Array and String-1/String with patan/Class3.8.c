#include<stdio.h>
#include<string.h>
int main(){
//strlen,strcpy,strcat,|strcmp| functions:
//we use strcmp() function (string compare) to compare character:
char a[100],b[100];
scanf("%s %s",&a,&b);

 int val = strcmp(a,b);
 //we use it to find small value
printf("smaller = %d",val);



return 0;
}
/*
strcmp is like a dictionary which has lexocographical order
1.(-1)negative -->Smaller
2.(0)Zero --> same/equal
3.(+1)posi tive --> Smaller






*/




