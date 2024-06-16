add_library(bar SHARED jni_main.cpp bar.cpp)

include_directories(include)

target_link_libraries(bar util foo)
target_include_directories(bar PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)