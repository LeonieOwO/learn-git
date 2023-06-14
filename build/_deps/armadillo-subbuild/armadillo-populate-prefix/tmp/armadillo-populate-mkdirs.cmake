# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/workspaces/learn-git/build/_deps/armadillo-src"
  "/workspaces/learn-git/build/_deps/armadillo-build"
  "/workspaces/learn-git/build/_deps/armadillo-subbuild/armadillo-populate-prefix"
  "/workspaces/learn-git/build/_deps/armadillo-subbuild/armadillo-populate-prefix/tmp"
  "/workspaces/learn-git/build/_deps/armadillo-subbuild/armadillo-populate-prefix/src/armadillo-populate-stamp"
  "/workspaces/learn-git/build/_deps/armadillo-subbuild/armadillo-populate-prefix/src"
  "/workspaces/learn-git/build/_deps/armadillo-subbuild/armadillo-populate-prefix/src/armadillo-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/workspaces/learn-git/build/_deps/armadillo-subbuild/armadillo-populate-prefix/src/armadillo-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/workspaces/learn-git/build/_deps/armadillo-subbuild/armadillo-populate-prefix/src/armadillo-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
