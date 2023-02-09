#include<stdio.h>
#include<string.h>
int main(){
//Sum of Two strings:
char a[100],b[100],jogfol[101];

scanf("%s %s",&a,&b);
//we use it to reverse it:
strrev(a);
strrev(b);
int i=0,j=0,k=0,hate=0;
while(a[i] != '\0' && b[j] != '\0')
{
    int sum = (a[i]-'0') + (b[j]-'0') + hate;  //hatar ta jog korar korar jnnow hate jog korba
    //we do minus '0' to convert character to integer

    jogfol[k] = (sum%10+'0');
    //we do plus '0'  to convert integer to character

    hate = sum/10;
   //hata rakar jnnow ata use korachi
   i++;
   j++;
   k++;

}
// a or b ta baki value k nita nichar method ta use korta hoba:
while(a[i] != '\0')
{
    int sum=(a[i] - '0') + hate; //akana b nabo na
    jogfol[k] = (sum%10 + '0');
    hate = sum/10;
    i++;   //akana j hoba na just i and k hoba
    k++;

}

while(b[j] != '\0')
{

    int sum = (b[j] - '0') + hate;  //akana a nabo na
    jogfol[k] = (sum%10 + '0');
    hate = sum/10;
    j++;  //akana i hoba na sodo j and k hoba
    k++;





}
if (hate > 0)
{
    jogfol[k] = hate + '0';
    k++;

}
jogfol[k] = '\0';

strrev(jogfol);
printf("Net Sum = %s",jogfol);




return 0;
}

/*
a-->8   2   1
b-->6   1
------------------
jog=14  3


 14 take last value pouar jnnow 14 % 10 =4
 14 take main value pouar jnnow 14/10 = 1 to get hatar






*/
