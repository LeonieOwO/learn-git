# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.25.2)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(armadillo-populate NONE)



include(ExternalProject)
ExternalProject_Add(armadillo-populate
                     "UPDATE_DISCONNECTED" "False" "DOWNLOAD_EXTRACT_TIMESTAMP" "true" "URL" "https://sourceforge.net/projects/arma/files/armadillo-12.4.0.tar.xz"
                    SOURCE_DIR          "/workspaces/learn-git/build/_deps/armadillo-src"
                    BINARY_DIR          "/workspaces/learn-git/build/_deps/armadillo-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)


