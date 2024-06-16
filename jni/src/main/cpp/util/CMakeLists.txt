add_library(util SHARED util.cpp)
target_link_libraries(util ${log-lib})
target_include_directories(util PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})