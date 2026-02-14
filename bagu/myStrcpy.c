/*
自己实现strcpy
strcpy 是 C 语言标准库 <string.h> 中的一个函数，用于复制字符串。
函数原型：char *strcpy(char *dest, const char *src);
作用：将字符串 src 的内容复制到 dest 中（包括结尾的 '\0'）；返回值是目标字符串 dest 的指针。
工作原理 ：strcpy 会从 src 的第一个字符开始，一个一个复制到 dest，直到遇到字符串结束符 '\0' 为止。


*/ 

#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest, const char *src) {
    char *ret = dest; // dest指针会不断递增，所以提前保存其初始地址
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}
// 测试示例
int main() {
    char src[] = "Hello, world!";
    char dest[50];

    my_strcpy(dest, src);
    printf("%s\n", dest);
    return 0;
}