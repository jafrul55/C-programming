#include<stdio.h>
//Introduction to pointer
int main()
{
    int a=10;
    printf("Address-> %p Value-->%d\n",&a,a); //you have to use %p for pointer
   //Below is a pointer address:
    int *p=&a; //-->This is a pointer.
    printf("Address-->%p Value-->%p\n",&p,p);
    printf("Value of that address %d\n",*p);  //*p-->dereferance

 //*p act is --> he will go to address and grab the address to print.
    return 0;
}
/*

* P is a address and Value also is a address.
* pointer we use to keep an address and if I order to pointer, to go at address and bring that address for me.
*



*pointer formula:
1.first a datatype of pointer(value)
2.astric (*) symbol
3.variable  name(p)..as your wish
4. =
5.Aspersand(&) symbol
6.address of value(a)


*p ---> is a dereferance

*/
