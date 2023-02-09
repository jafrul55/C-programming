#include<stdio.h>
#include<stdbool.h>
//Small to big sorting
void sort(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++)
    {
        for(int check = pos+1;check<n;check++)
        {
            if(a[check]<a[pos])  //small to big
            {
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
}
void array_copy(int *a,int *b,int n)
{
       for(int i=0;i<n;i++)
   {
       b[i] = a[i];
   }
}
bool is_sorted(int *a,int n)
{
   int b[n];
   array_copy(a,b,n); //a gola b ar kacha copy korchi
   sort(b,n);  //b ka sort korbo
   for(int i=0;i<n;i++)
   {
       if(a[i] != b[i])
       {
           return false;
       }
   }
   return true;

}

int main(){
int ar[6] = {10,30,20,40,50,60}; //we don't sorted main array
//If array is sorted (sequencially)small to big then print yes else no
bool ans = is_sorted(ar,6);
if(ans = true)
{
    printf("Yes,sorted\n");  //if ans is sorted
}
else{
    printf("No\n");  //else ans not sorted
}
return 0;
}
