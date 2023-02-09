#include<stdio.h>
//Access with pointer:
int main(){
int a = 100;
int *p = &a; //now *p a ka pointer kora palba
int **q = &p; // q is a second pointer so we use here two star(astric symbol)

//You can use it as your wish
printf("Value--> %d Address-->%p\n",a,&a);
//printf("Value-->%p Address--> %p\n",p,&p);
//printf("Value-->%p Address-->%p\n",q,&q);

//Now we access q value:
printf("%p\n",*q);  //This is the value of p

return 0;
}
/*
  a                p           Q
[-----] ----->  [------] --->[-----]
(100) <<======   (5200) <<=== 7300
This is called "point of pointer"
In case of upper:
"P" value is an address of "a" and Q value is an address of "p"









*/

