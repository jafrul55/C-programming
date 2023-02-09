#include<stdio.h>
//For all value we can use it.
int get_length(char input[])
{
    int index = 0;
    while(input[index] != '\0')   //to find length
    {
        index++;
    }
  printf("%d\n",index);
}
int main(){
//Return + Parameter Function

char a[] = "hellobae",b[]="world";
int L1 = get_length(a);
int L2 = get_length(b);







return 0;
 }

 /*
/Return formula:

[ return type ] name (Parameter-->[],[],[])
{



   Instruction;

}










 */

