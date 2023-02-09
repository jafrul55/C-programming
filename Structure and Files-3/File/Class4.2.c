
#include<stdio.h>
//Usage Of Files Keeping A Log File
//Log is a history type
int main()
{
   FILE *logFile = fopen("log.txt","a"); //If we use here "a" as a mode
   fprintf(logFile,"Hello Amazon\n");  //it will print in logFile
  //if we use "a" as a mode then all value gradually store in log file
  //tumakha just bar bar print korta hoba and you can also change input
    return 0;
}

