/*
如何判断大端模式还是小端模式
    通过联合体将多字节值 0x0102 写入内存，再以字节数组形式读取其低地址和高地址的字节值，
    根据字节顺序判断系统是大端序还是小端序。

    大端序、小端序概念：
    - 大端序：高字节存储在低地址，低字节存储在高地址
    - 小端序：高字节存储在高地址，低字节存储在低地址
*/

#include <stdio.h>
int main()
{
    union // 联合体 ，所有成员共享同一地址空间
    {
        short value;
        char bytes[sizeof(short)];
    } test;
    
    test.value = 0x0102;
    if (test.bytes[0] == 1 && test.bytes[1] == 2) // bytes[0]（低地址），bytes[1]（高地址）
        printf("big-endian\n");
    else if (test.bytes[0] == 2 && test.bytes[1] == 1)
        printf("little-endian\n");
    else
        printf("unknown\n");
    return 0;
}