add_library(baz SHARED jni_main.cpp baz.cpp)

add_compile_options(-fvisibility=hidden)
add_compile_options(-fvisibility-inlines-hidden)

include_directories(include)

target_link_libraries(baz util)
target_include_directories(baz PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)