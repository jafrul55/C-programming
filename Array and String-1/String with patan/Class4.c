#include<stdio.h>
int main(){
//Count Array in string:
//now we will try to count character:
char ar[100];
scanf("%s",&ar);

int counter[26] = {0};

for(int i=0;i<strlen(ar);i++)
{
   char value = ar[i];
   counter[value-97]++;

}

for(char value = 'a';value <= 'z';value++)
{
    if(counter[value-97]>0)
    {
        printf("Value-> %c count-> %d\n",value,counter[value-97]);
    }
}












return 0;
}
/*
array ta character index hoi na

to get index value from a,b....character
index = a(97) - 97 = 0;
index = b(98) - 97 = 1;
index = c(99) - 98 = 2;

that's why we use 97 to ounter character

instead of 97 we can use 'a' charater to count


*/
