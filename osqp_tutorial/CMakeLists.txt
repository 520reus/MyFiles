# 指定CMake的最小版本要求
cmake_minimum_required(VERSION 3.0)
# 定义工程名称,并可指定工程支持的语言
project(soldier)
# 添加g++编译选项
add_compile_options("-std=c++11")
# 设定编译类型为debug,调试时需要选择debug
set(CMAKE_BUILD_TYPE Debug)
# 设置可执行文件生成路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
# 向工程添加多个特定的头文件搜索路径 --->相当于指定g++编译器的-I参数
include_directories(include)
# 发现一个目录下所有的源代码文件并将列表存储在一个变量中
aux_source_directory(src SRCS)
# 编译SRC变量所代表的源代码文件,生成main可执行文件
add_executable(main main.cpp ${SRCS})
# 包含库文件路径
include_directories(lib/include)
# 设置库输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
# 生成静态库
#add_library(mylib STATIC ${PROJECT_SOURCE_DIR}/lib/src/swap.cpp)
# 可执行文件链接到库文件
#target_link_libraries(main mylib)

# Find OSQP library and headers
find_package(osqp REQUIRED)

# Link the OSQP shared library
target_link_libraries(main PRIVATE osqp::osqp)