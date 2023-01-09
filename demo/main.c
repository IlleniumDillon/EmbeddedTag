/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-09 15:42:16
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-01-09 18:38:52
 * @FilePath: \EmbeddedTag\demo\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "eTag.h"

const char *tag = "TEST";

int main()
{
    eTag_init();
    eTag_start();
    eTag_a(tag,"%d",10);
    eTag_e(tag,"%d",10);
    eTag_w(tag,"%d",10);
    eTag_i(tag,"%d",10);
    eTag_d(tag,"%d",10);
    eTag_v(tag,"%d",10);
    eTag_hexDump("test",16,tag,256);
    return 0;
}