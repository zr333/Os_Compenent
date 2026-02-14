# 指定cmake最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(hello)

# 生成可执行文件：add_executable(目标名 源码列表)
add_executable(hello main.cpp factorial.cpp printhello.cpp)
