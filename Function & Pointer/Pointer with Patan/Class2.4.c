#include<stdio.h>
//Access with pointer:
int main(){
int a = 100;
int *p = &a; //now *p a ka pointer kora palba
int **q = &p; // q is a second pointer so we use here two star(astric symbol)

//Using dereferance  we can change value:
//That means go to address and change the value

*p = -500;  // Using this method you can change a value access by p.
printf("%d",a);

return 0;
}
/*
  a                p           q
[-----] ----->  [------] --->[-----]
(100) <<======   (5200) <<=== 7300
This is called "point of pointer"
In case of upper:
"P" value is an address of "a" and q value is an address of "p"









*/



