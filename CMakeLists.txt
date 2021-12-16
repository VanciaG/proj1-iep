cmake_minimum_required(VERSION 3.0)

set(myproject "proj1")
# Project name
project(${myproject})

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()

set(myfiles1 src/device.cpp inc/device.hpp)
set(myfiles2 src/telefon.cpp inc/telefon.hpp)
set(myfiles3 src/televizor.cpp inc/televizor.hpp)
set(myfiles4 src/casti.cpp inc/casti.hpp)

add_library(lib1 STATIC ${myfiles1})
add_library(lib2 STATIC ${myfiles2})
add_library(lib3 STATIC ${myfiles3})
add_library(lib4 STATIC ${myfiles4})

add_executable(${myproject} src/main.cpp)

target_link_libraries(${myproject} PUBLIC lib1)
target_link_libraries(${myproject} PUBLIC lib2)
target_link_libraries(${myproject} PUBLIC lib3)
target_link_libraries(${myproject} PUBLIC lib4)

target_include_directories(${myproject} 
 PRIVATE src INTERFACE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
	$<INSTALL_INTERFACE:inc>)


