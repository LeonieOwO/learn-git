if(EXISTS "/workspaces/learn-git/build/tests[1]_tests.cmake")
  include("/workspaces/learn-git/build/tests[1]_tests.cmake")
else()
  add_test(tests_NOT_BUILT tests_NOT_BUILT)
endif()
