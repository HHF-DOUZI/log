#include <stdio.h>
#include "log.h"

int main()
{
    int a = 10, b = 11;
    EMlog(LOG_DEBUG,"app start");
    EMlog(LOG_INFO,"A = %d",a);
    EMlog(LOG_WARN,"app LOG_WARN");
    EMlog(LOG_ERROR,"app LOG_ERROR");
}