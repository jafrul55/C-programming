#include<stdio.h>
int main(){
//Counter Array/Frequency Array:
int n;
scanf("%d",&n);
int ar[n];

for(int i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
}
int count[11] = {0};  //Index sob somoy ak bashi.example: 1-->10 ,size maximum value 11.

for(int i=0;i<n;i++)
{
  int val = ar[i];
  count[val]++;

}
//For specific space we can declare val index first:
for(int val = 0;val < 10;val++)
{
    //To avoid 0 we can use if
    if(count[val] > 0)
    {
        printf("Value -->%d,count--> %d\n",val,count[val]);
    }
}






return 0;
}
