#include<stdio.h>
//Array with Pointer

int main(){
  int a[5] = {10,20,30,40,50};
  printf("%p %p\n",a,&a[0]); // here are two 'a' available
  //first (a) is 'a' value and second &a[0] is a address of a[0]( a of zero.)

//Array is an pointer

return 0;
}

/*
1.Array is a block of memory

2.&a[0] address always stay at "a" value .
3. a value and &a[0] also same.






*/



