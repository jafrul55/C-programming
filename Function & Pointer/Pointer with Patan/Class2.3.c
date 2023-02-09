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

//If you want to know the value of (a) through **q.Then use ** (double astric symbol):
printf("%d\n",**q); //If you do dereferance two time then we get the value of a.

//**q ===>> dereferance(*q) ==>P value =====>> dereferance(*p) ====>> a value.














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


