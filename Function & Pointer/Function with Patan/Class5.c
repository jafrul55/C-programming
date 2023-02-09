#include<stdio.h>

//Has Return + No Parameter:
//This is the use of 3rd function
int make_sum() //there is no parameter
//But if we use here void as a parameter then it never go int. int s= make_sum(10,20);
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a + b;
    return sum;
}

int main(){
int s= make_sum();
printf("%d",s);
return 0;
/*
/But void na dila ata |int s = make_sum(10,20) ta asba but 10,20 vanish hoya jaba.






*/







return 0;
}

