add_library(foo SHARED jni_main.cpp foo.cpp)

#add_compile_options(-fvisibility=hidden)
#add_compile_options(-fvisibility-inlines-hidden)

include_directories(include)

target_link_libraries(foo util)
target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)