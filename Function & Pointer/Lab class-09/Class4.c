#include<stdio.h>
//Sorting Technique_Selection:
//Big to Small:
void sort(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++)  //ata zero take last ar ag porjon cholba
    //position take soro hoba and last ar ag porjonto cholba
    {
        for(int check = pos+1;check<n;check++)
        //position ar samnar take last porjonto cholba
        {
            if(a[check]>a[pos])
            //if a of check value become big than a of pos. Then swap it
            {
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
}


int main()
{
     int ar[6] = {2,5,10,3,14,20};
     sort(ar,6);
     for(int i=0;i<6;i++)
     {
           printf("%d ",ar[i]);
     }
     return 0;
}








/*
# There are two types of sorting available:
1.Big to Small
2.Small to Big

# kono akta array sobchaya kom or sob chaya bashi takla oi value ta sort kora palba






*/
