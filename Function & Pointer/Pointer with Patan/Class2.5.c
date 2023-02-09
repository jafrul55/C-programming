#include<stdio.h>
//Access with pointer:
int main(){
int a = 100;
int *p = &a; //now *p a ka pointer kora palba
int **q = &p; // q is a second pointer so we use here two star(astric symbol)

//Using dereferance  we can change value:
//That means go to address and change the value

 **q = 2000;  // Using this method you can change a value or update value access by *q.
// use two astric symbol we can go to 'a' value to change a value.
printf("%d",a);
//Ami tar gora giya 'a' ar man change kora aschi


return 0;
}
/*
  a                p           Q
[-----] ----->  [------] --->[-----]
(100) <<======   (5200) <<=== 7300
 a value  <<======== *p  <<====== **q

This is called "point of pointer"
In case of upper:
"P" value is an address of "a" and q value is an address of "p"









*/




