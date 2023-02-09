#include<stdio.h>
#include<string.h>
int main(){
//Sum of Two strings Bug Fixing:
char a[100],b[100],sum[101];
scanf("%s %s",&a,&b);
strrev(a);
strrev(b);
int i=0,j=0,k=0,hate=0,result=0;
//To do sum we do below formula:
while(a[i] != '\0' && b[j] != '\0')
{
   result = (a[i] - '0')+ (b[j] - '0') + hate;
   sum[k] = result%10 + '0';
   hate = result/10;
   i++;
   j++;
   k++;

}
//we use it if a is available last:
while(a[i] != '\0')
{
    result = (a[i] - '0') + hate;
    sum[k] = (result%10) + '0';
    hate = result/10;
    i++;
    k++;
}
//we use it if b is available last:
while(b[j] != '\0')
{
    result = (b[j] - '0') + hate;
    sum[k]  = (result%10) + '0';
    hate = result/10;
    j++;
    k++;
}
//if t hate number greater than zero then we use it:
if(hate > 0)
{
    sum[k] = hate + '0';
    k++;

}
//else we use null character to stop the loop.
else{

    sum[k] = '\0';
}
//last we will reverse sum value:
strrev(sum);
printf("%s",sum);








return 0;
}
