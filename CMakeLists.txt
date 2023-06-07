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
	#add_compile_options(-Wall -Wextra -Werror -pedantic -O0)
	add_compile_options(-Wall)
	 
	# add a library for your student structure
    #add_library(hw24_animals c++/src/HA3.cpp)
    # add the includes to the library
    #target_include_directories(hw24_animals PUBLIC include)

	# add an executabel and assign files to it
	#add_executable(basics_in_Cpp c++/exceptions.cpp)



	#find_package( OpenCV ) # alternative: find_package( OpenCV REQUIRED )

    # continue only if opencv is found
    #if(OpenCV_FOUND)
      # add executable for opencv hello world
    #  add_executable(opencv_canny c++/canny_edges.cpp)

	  # declare the path to the image we want to work with
	#  target_compile_definitions(opencv_canny PRIVATE IMGPATH="${CMAKE_CURRENT_LIST_DIR}/c++" OUTPATH="${CMAKE_CURRENT_BINARY_DIR}")
	  # include and link all opencv stuff
	#  target_include_directories(opencv_canny PUBLIC ${OpenCV_INCLUDE_DIRS} )
	#  target_link_libraries( opencv_canny ${OpenCV_LIBRARIES})
    #endif()	

	# add include directories to executable
    #target_include_directories(basics_in_Cpp PRIVATE include)
    # link your libraries
    #target_link_libraries(basics_in_Cpp PRIVATE hw24_animals)

	#search for module opencv
	find_package( OpenCV ) # alternative: find_package( OpenCV REQUIRED )
	
	# continue only if opencv is found
	if(OpenCV_FOUND)
		# enable FetchContent module
		include(FetchContent)
	
		# download CvPlot library and add it to the project
		FetchContent_Declare(cvplot 
	       GIT_REPOSITORY https://github.com/Profactor/cv-plot.git 
		   GIT_TAG origin/master) # or whatever tag you want
		FetchContent_GetProperties(cvplot)
		if(NOT cvplot_POPULATED)
			set(CVPLOT_USE_CONAN FALSE)
			FetchContent_Populate(cvplot)
		endif()


	# download rapidcsv library and add it to the project
	FetchContent_Declare(rapidcsv
	   GIT_REPOSITORY https://github.com/d99kris/rapidcsv.git
       GIT_TAG origin/master) # or whatever tag you want
    FetchContent_MakeAvailable(rapidcsv)

	# add executable for weather analysis
	add_executable(read_c c++/src/weather_analysis.cpp)
	target_include_directories(read_c PUBLIC ${OpenCV_INCLUDE_DIRS} ${cvplot_SOURCE_DIR}/CvPlot/inc)
    target_link_libraries( read_c ${OpenCV_LIBRARIES})
    
	add_executable(read_b c++/src/read.cpp)
	target_compile_definitions(read_b PRIVATE RESOURCEPATH="${CMAKE_CURRENT_LIST_DIR}/c++/src")
    target_link_libraries(read_b PUBLIC rapidcsv)

    endif()


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
