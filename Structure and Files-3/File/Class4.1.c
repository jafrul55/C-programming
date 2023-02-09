
#include<stdio.h>
//Usage Of Files Keeping A Log File
//Log is a history type
int main()
{
   FILE *logFile = fopen("log.txt","w"); //here is write mode
   fprintf(logFile,"Hello at 12.45 AM");  //it will print in logFile
   //In case of write mode past history will remove and new history will set
    return 0;
}
