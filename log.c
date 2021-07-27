#include "log.h"

char * EM_LOGlevelGet(const int level)
{
    if (level == LOG_DEBUG){
        return "LOG_DEBUG";
    }else if (level == LOG_INFO){
        return "LOG_INFO";
    }else if (level == LOG_WARN){
        return "LOG_WARN";
    }else if (level == LOG_ERROR){
        return "LOG_ERROR";
    }
        return "UNKNOW";
}

void EM_LOG(const int level,const char* fun,const int line, const *fmt,...)
{
    #ifdef OPEN_LOG
    va_list arg;
    va_start(arg,fmt);
    char buf[1+vsnprintf(NULL,0,fmt,arg)];
    vsnprintf(buf,sizeof(buf),fmt,arg);
    va_end(arg);
    if(level >= LOG_LEVEL)
        printf("[%s] [%s %d] %s\n",EM_LOGlevelGet(level),fun,line,buf);
    #endif
}

