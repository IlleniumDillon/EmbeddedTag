/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-09 12:27:41
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-01-09 16:09:48
 * @FilePath: \EmbeddedTag\port\eTag_port.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "eTag.h"

#include <stdio.h>

void eTag_portInit(void)
{
    /*输出端口初始化*/
}

void eTag_portDeinit(void)
{
    /*输出端口失能*/
}

void eTag_portOutput(const char *log, size_t size)
{
    /*端口输出方法*/
    /*
    printf(log);
    */
}

const char *eTag_portGetTime(void) 
{
    /*访问系统时间方法*/
    /*
    extern char time_buf[9];
    time_t tt = time(0);
    strftime(time_buf, sizeof(time_buf), "%H:%M:%S", localtime(&tt));
    return NULL;
    */
}