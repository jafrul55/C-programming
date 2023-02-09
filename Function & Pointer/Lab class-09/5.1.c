#include<stdio.h>
#include<stdbool.h>
//Check is it sorted or not
void sort(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++)
    {
        for(int check = pos+1;check<n;check++)
        {
            if(a[check]>a[pos])  //Big to small
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
        b[i] = a[i];   //b[n] array k akana raka jaba na ,rakla sata hariya jaba
    }
}

bool is_sorted(int *a,int n)
{
    int b[n];  // b array k akana rakbo
    array_copy(a,b,n); // a index will in b index and n is a size
    sort(b,n); //we will do sort to b here
    for(int i=0;i<n;i++)
    {
        //it will check array all index is same or not
        if(a[i] != b[i])  //if a[i] is not b[i] then access here and return false
        {
           return false;
        }

    }
     return true;

}

int main(){
int ar[6] = {20,18,15,5,3,2};  //Big to Small
bool ans = is_sorted(ar,6);
if(ans)
{
    printf("Yes,sorted\n");

}
else{

    printf("No,sorted\n");
}

return 0;
}
