#include<stdio.h>

int * send()
{
    int ar[2] = {1,2};
    return ar;
    //array toiri hoyacha but jokon return koracha tokon function chola giyacha
    //and array address golo chola giyacha.
}

int main()
{
    int *ptr = send();
    printf("%d\n",ptr);
    return 0;
}
