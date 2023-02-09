#include<stdio.h>
int main(){
//Sum,|Max|,|Min| and Reverse of an array:
//We will find Maximum value:

int ar[6] = {2,1,0,-5,10,5};
int min= ar[0],max=ar[0];
for(int i=1;i<6;i++)
{
    //To find Maximum value:
    int val = ar[i];
    if(val>max){

        max = val;
    }

    //To find minimum value:
    if(val<min)
    {
        min = val;
    }
}

printf("Min = %d Max = %d",min,max);




return 0;
}
