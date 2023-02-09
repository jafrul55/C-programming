#include<stdio.h>
//Now we use here array
//Array is a pass by reference.
//Normal value is a pass by value
void change(int *ptr,int x)  //it will copy a[2] address and print it
{
    *(ptr + 2) = 1000;
    //you can do second index;
    //*(ptr+2) = 1000;
}
int main()
{
    //a is a pass by reference
    int a[3] = {1,2,3};
    //K is pass by value:
    int k = 10;
    change(a,k);
    printf("%d %d %d\n",a[0],a[1],a[2]);
    //Here  first and second index  remain same but third index will change
    printf("%d\n",k);


}
/*
* In parameter we can change value two way
1.Pass by value.(ora change korla main ar kicho jai asa na).
2.Pass by reference.(okana giya jodi dereference kore jodi kono changes kori,Tahola main ta change hoya jaba).







*/


