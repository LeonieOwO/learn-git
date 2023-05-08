# define the minimum cmake version
	cmake_minimum_required(VERSION 3.20)

	# define the project name
	project(basics_in_Cpp VERSION 1.0 LANGUAGES CXX) 
	#project(basics_in_Cpp VERSION 1.0 LANGUAGES C)

	# define the c standard version
	set(CMAKE_CXX_STANDARD 14) 
	set(CMAKE_CXX_STANDARD_REQUIRED True)
	#set(CMAKE_C_STANDARD 11) 
	#set(CMAKE_C_STANDARD_REQUIRED True)

	# add some compile options
	add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

	# add an executabel and assign files to it
	add_executable(basics_in_Cpp dynamic_mem2.cpp)

	#enable testing
	#enable_testing()
	#check if we have gtest we have to do this in c++
	#find_package(GTest REQUIRED)
	#include gtest cmake stuff
	#include(GoogleTest)#für alle die jetzt kommen include gtest
	#create a test executable
	#add_executable(tests test/testing.cpp)#name ordner/file
	#link the gtest librarys
	#target_link_libraries(tests PRIVATE GTest::GTest GTest::Main)
	#link the librarys we want to test
	#target_link_libraries(tests PRIVATE tdd_functions_lib)
	# add the include directories
	#target_include_directories(tests PUBLIC include)
	#discover and add tests to the test list
    #gtest_discover_tests(tests)

	#add Library
	#add_library(library1.a STATIC add.c)

	#add include library
	#target_include_directories(library1.a PUBLIC include)

	#add Library
	#add_library(library2.a SHARED pic.c)

	#add include library
	#target_include_directories(library2.a PUBLIC include)

	#add_executable(exec main.c)

	#target_include_directories(exec PUBLIC include)

	#target_link_libraries(exec PRIVATE library1.a)

	#add_executable(exed main.c)

	#target_include_directories(exec PUBLIC include)

	#target_link_libraries(exec PRIVATE library2.a)
