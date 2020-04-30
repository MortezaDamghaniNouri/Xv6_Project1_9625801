#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{

    int runningProcessPID=getRunningProcessPID();//getRunningProcessPID is a system call which returns the PID of the running process .

    int PIDs[16];
    for(int i=0;(i<16) && getRunningProcessPID()==runningProcessPID;++i)
    {
       PIDs[i]=fork();
     



    }

   if(getRunningProcessPID()==runningProcessPID)
   {
 printf(1,"===============================================================\nThe getChildren function result is:\n");
    getChildren();
    



     printf(1,"The main result is:\n");
     for(int i=0;i<16;++i)
    {
        printf(1,"%d\n",PIDs[i]);



    }
    printf(1,"===============================================================\n");



   }






















}















