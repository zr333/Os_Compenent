#include <stdio.h>

// ===== 配置区 =====
#define DEBUG        // 是否开启调试
#define VERSION 2    // 程序版本号

// ===== 平台检测 =====
#ifdef _WIN32
    #define PLATFORM "Windows"
#elif __linux__
    #define PLATFORM "Linux"
#elif __APPLE__
    #define PLATFORM "macOS"
#else
    #define PLATFORM "Unknown"
#endif

// ===== 日志宏 =====
#ifdef DEBUG
    #define LOG(msg) printf("[DEBUG] %s\n", msg)
#else
    #define LOG(msg)   // 空实现（直接删除）
#endif

int main() {

    // ===== 版本控制 =====
#if VERSION >= 2
    printf("Running new version\n");
#else
    printf("Running old version\n");
#endif

    // ===== 平台信息 =====
    printf("Platform: %s\n", PLATFORM);

    // ===== 调试日志 =====
    LOG("Program started");

    return 0;
}