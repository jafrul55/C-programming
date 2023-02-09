#include<stdio.h>
int main()
{
    FILE *logFile = fopen("log.txt","a");  // If we give here "a" as mode 
    //then new history will add with before history
    //If file unkown or not found in input
    FILE *inputFile = fopen("habijabi.txt","r");
    if(inputFile == NULL)
    {
        //
        fprintf(logFile,"I love you Meta\n");
        //Then we will store it in logfile
        return 0;
    }

}
