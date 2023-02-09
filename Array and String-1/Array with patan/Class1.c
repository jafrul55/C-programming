#include<stdio.h>
int main(){
//Introduction to Array and Why Array is Used.
int n=10;
int count = 0;
int note;
 for(int i=0;i<n;i++)
{

    scanf("%d",&note);

    if(note == 100)
    {   //100 holo
        count++;
    }

}

printf("Note-%d Count-%d",note,count);




return 0;
}
