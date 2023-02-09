#include<stdio.h>
//Function Declaratin,Return Type ,Parameter:
//First we will work with Function Declaration:

//we declare function first in parameter:
int make_sum(int a,int b)
{

    int sum = a+b;
    sum = sum *2;
    sum = sum - 100;  //we just need to change here.We do not need to change full code.
    sum = sum + 1000;
    return sum;

}
int main(){
//Now here we will save this function:
int s = make_sum(10,105);
//if we want  to do more sum ,then we do not need extra line to write
int s2 = make_sum(2,14);  // we use it to save function

printf("%d %d",s,s2);
return 0;
//save function value 10,15 will go in int a and int b









return 0;
}
/*

/Function Declaration:
return -type     name(parameter)
{
     /instructions


}

/parameter holo nijar moka bola daya
/we can take input using two method:
1.Using Parameter
2.Input in function


/We can give output using two method:
1.Using return method
2.Output in function







*/

