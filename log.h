#ifndef __EM_LOG_H__
#define __EM_LOG_H__

#include <stdio.h>
#include <stdarg.h>

#define OPEN_LOG 1
#define LOG_LEVEL LOG_DEBUG
#define LOG_SAVE 1

typedef enum{
    LOG_DEBUG = 0,
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR,
}E_LOG_LEVEL;


void EM_LOG(const int level,const char* fun,const int line, const *fmt,...);

#define EMlog(level,fmt...) EM_LOG(level,__FUNCTION__,__LINE__,fmt)

#endif