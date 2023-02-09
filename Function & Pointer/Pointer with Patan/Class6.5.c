#include<stdio.h>
#include<string.h>
//String can find the size because of null character
//But Array cannot find the size because array have no any null character.

void send(char *ar)
{
    int sz = strlen(ar);
    printf("%d\n",sz);

}
int  main()
{
    char ar[5] = "abcd";
    send(ar);

    return 0;
}

/*

/String can find the size because of null character
/But Array cannot find the size because array have no any null character.
/array approach infinity .So it can not count.
*/
