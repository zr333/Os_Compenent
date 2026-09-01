
/*
在C语言中，main函数是程序的入口点。带参数的main函数允许程序接收来自命令行的输入.
函数原型：int main(int argc, char *argv[])
 - int argc：表示 命令行参数的个数。它的值 ≥ 1，至少包含程序本身的名字。
 如 ./program hello world，argc = 3
 - char *argv[]：表示 命令行参数的字符串数组。存储每个命令行参数，第一个元素是程序名，最后一个元素是 NULL
 argc只统计有效参数个数，不包括最后那个 NULL
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
    // printf("参数个数: %d\n", argc);

    // for (int i = 0; i < argc; i++) {
    //     printf("argv[%d] is %s\n", i, argv[i]);
    // }

    if(argc != 3)
    {
        printf("用法：./program <arg1> <arg2>\n");
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    printf("计算结果: %d + %d = %d\n", a, b, a + b);

    
    return 0;
}
