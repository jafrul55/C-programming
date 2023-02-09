#include<stdio.h>
//Return + Parameter Function
int get_length(char input[])
{
    int index = 0;
    while(input[index] != '\0')   //to find length
    {
        index++;
    }
    return index;
}
int main(){

char a[] = "hellobae",b[]="world";
int L1 = get_length(a);
int L2 = get_length(b);

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
