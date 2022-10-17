cmake_minimum_required (VERSION 3.12)

project(StapelProject)


set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)




add_executable(
	StapelProject 
	source/main.cpp  
 "source/stapel_exception.h" "source/stapel.h" "source/stapel.cpp")


# Add tests
add_subdirectory(tests)

