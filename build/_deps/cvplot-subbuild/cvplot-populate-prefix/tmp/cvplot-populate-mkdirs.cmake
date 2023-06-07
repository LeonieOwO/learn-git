# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/workspaces/learn-git/build/_deps/cvplot-src"
  "/workspaces/learn-git/build/_deps/cvplot-build"
  "/workspaces/learn-git/build/_deps/cvplot-subbuild/cvplot-populate-prefix"
  "/workspaces/learn-git/build/_deps/cvplot-subbuild/cvplot-populate-prefix/tmp"
  "/workspaces/learn-git/build/_deps/cvplot-subbuild/cvplot-populate-prefix/src/cvplot-populate-stamp"
  "/workspaces/learn-git/build/_deps/cvplot-subbuild/cvplot-populate-prefix/src"
  "/workspaces/learn-git/build/_deps/cvplot-subbuild/cvplot-populate-prefix/src/cvplot-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/workspaces/learn-git/build/_deps/cvplot-subbuild/cvplot-populate-prefix/src/cvplot-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/workspaces/learn-git/build/_deps/cvplot-subbuild/cvplot-populate-prefix/src/cvplot-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
