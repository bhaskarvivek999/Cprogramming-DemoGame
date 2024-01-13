#include<stdio.h>
#include<stdlib.h>
#include "demogame.h"
#include<time.h>


int dice()
{
    int num , value;
    time_t ct;

    do
    {
        //srand(111);

        value=rand();
        ct=time(0);
        num=(value+ct)%10;
       //printf("\n %d ",num);

    }while(num >6 || num == 0);

    return num;
}


