cmake_minimum_required (VERSION 3.20)

# Enable Hot Reload for MSVC compilers if supported.

set(CMAKE_CXX_STANDARD 17)

project ("Project1")

#include_path
include_directories(${PROJECT_SOURCE_DIR}/include)

#Add Library
add_library(mylib src/utils.cpp)


#Main Application
add_executable(MyApp src/main.cpp src/utils.cpp)
target_link_libraries(MyApp mylib)

#test_Application
#Unit test
enable_testing()
#add_executable(MyTests tests/test_add1.cpp)
#target_link_libraries(MyTests mylib)
#add_test(NAME RunMyTests COMMAND MyTests)
macro(add_calc_test name)
	add_executable(${name} tests/${name}.cpp)
	target_link_libraries(${name} mylib)
	add_test(NAME ${name} COMMAND ${name})
endmacro()

#Add test cases
add_calc_test(test_add1)
add_calc_test(test_add2)
add_calc_test(test_add3)
