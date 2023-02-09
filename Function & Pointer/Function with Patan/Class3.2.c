#include<stdio.h>
//This is the use of first function:
//But for specific value we can use below formula:
int get_length(char input[])  //parameter
{
    int index = 0;
    while(input[index] != '\0')   //to find length
    {
        index++;
    }
  return index;
}
int main(){
//Return + Parameter Function

char a[] = "hellobae",b[]="world";
int L1 = get_length(a);
int L2 = get_length(b);
//We use below strategy for specific value:

L2 = L2 * 3;

printf("%d %d\n",L1,L2);

return 0;
 }

 /*
/Return formula:

[ return type ] name (Parameter-->[],[],[])
{



   Instruction;

}










 */


