cmake_minimum_required(VERSION 3.4.1)

project(hello_jni)

include_directories(include)
link_directories(lib)

add_subdirectory(foo)
add_subdirectory(bar)
add_subdirectory(baz)
add_subdirectory(util)

#add_compile_options(-fvisibility=hidden)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fvisibility=hidden -fvisibility-inlines-hidden")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility=hidden -fvisibility-inlines-hidden")
add_library(
        hello-jni # so 库的名称 libhello-jni.so
        SHARED # 设置为分享库
        # 指定C源文件的路径，指向公共cpp-src目录
        hello-jni.cpp
)

find_library(
        log-lib # 设置路径变量名称
        log # 指定CMake需要加载的NDK库
)

# 链接hello-jni库依赖的库，注意下面变量名的配置
target_link_libraries(hello-jni baz util ${log-lib})
