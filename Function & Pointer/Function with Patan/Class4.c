#include<stdio.h>
#include<string.h>
/// No Return + Has parameter:
//Now we use second type function
//This function have |no return| but |have parameter|:
//This functon naver give me any answer:
//when we have no any return value that time we use |void| type:
void check_char(char input[],char ch)
{
    for(int i=0;i<strlen(input);i++)
    {
        char val = input[i];
        if(val == ch)
        {
            printf("YES\n"); //if the character we found then it will print yes
            //Otherwise no will print
            //we must use return here but not break
            //if we use break here then function print yes and no together
            return;
            //We do not use here return 0.we should use here return.
        }
    }
    printf("NO\n");
    //you can use here return as your wish
}
int main()
{
char a[]="hellobae",b[]="world";
char c = 'o';
check_char(a,c);


return 0;





}
