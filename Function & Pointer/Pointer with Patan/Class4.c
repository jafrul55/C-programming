#include<stdio.h>
//Constant pointer:
int main(){
//Constant pointer diya sa jaka pointer kortacha taka change kora jaba na.
//But tar nijar pointer k change korta parba
const int a=10;
 int *const p = &a;
*p=20;

printf("%d\n",a);

return 0;
}
/*
There are two types of pointer available:
1.If I give a constant before data type then the focusing pointer never change
2.If we use constant after astric symbol then his own pointer can not change

(1).int a=10;
 const int *p = &a;
 *p=20;
 printf("%d\n",a);
 /He can not change focusing pointer



 (2).Int a = 10;
     int * const p = &a;
     p = 20;
     printf("%d\n",a);
/He cannot change his ownself.




*/
