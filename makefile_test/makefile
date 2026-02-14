# version 1.0
# hello: main.cpp factorial.cpp printhello.cpp
# 	g++ -o hello main.cpp factorial.cpp printhello.cpp


# # version 2.0
# CXX = g++
# TARGET = hello
# OBJ = main.o factorial.o printhello.o

# $(TARGET): $(OBJ)
# 	$(CXX) -o $@ $^

# main.o: main.cpp
# 	$(CXX) -c main.cpp       # 不链接，所以不需要其他文件
# factorial.o: factorial.cpp
# 	$(CXX) -c factorial.cpp
# printhello.o: printhello.cpp
# 	$(CXX) -c printhello.cpp

# .PHONY: clean
# clean:
# 	rm -f $(TARGET) $(OBJ)


# # version 3.0
# CXX = g++
# TARGET = hello
# OBJ = main.o factorial.o printhello.o

# # 编译选项，显示所有的warning
# CXXLAGS = -c -Wall

# $(TARGET): $(OBJ)
# 	$(CXX) -o $@ $^

# %.o: %.cpp
# 	$(CXX) $(CXXLAGS) $<
# 	# 单独编译一个源文件成一个目标文件”，所以只需要它的第一个依赖项，也就是当前这个.cpp 文件，所以用 '$< 

# .PHONY: clean
# clean:
# 	rm -f $(TARGET) $(OBJ)

# version 4.0
CXX = g++
TARGET = hello
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))

# 编译选项，显示所有的warning
CXXLAGS = -c -Wall

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJ)	