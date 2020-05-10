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
    if(getRunningProcessPID()==PIDs[0])
    {
        printf(1,"it is :%d\n",PIDs[0]);


    }
    if(getRunningProcessPID()==PIDs[1])
    {
         printf(1,"it is :%d\n",PIDs[1]);


    }
    if(getRunningProcessPID()==PIDs[2])
    {
         printf(1,"it is :%d\n",PIDs[1]);


    }















    printf(1,"FINISHED\n");


















}