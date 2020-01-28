cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

#Enable cmake_modules
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

include(GNUInstallDirs)
include(CommonCompilers)
include(__version__)

# Enable debug symbols by default
# must be done before project() statement
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()
# (you can also set it on the command line: -D CMAKE_BUILD_TYPE=Release)

project(SSS VERSION ${SSS_VERSION} LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
include_directories("${PROJECT_BINARY_DIR}")

#Add required packages
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
set(SFML_STATIC_LIBRARIES TRUE)

find_package(PythonLibs 3.7 REQUIRED)
find_package(Boost 1.65.0 REQUIRED)

include_directories(${PYTHON_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})

enable_testing()


#Add src
set(PROJECT_SOURCE_DIR src)
set(${PROJECT_NAME}_SOURCE_DIR ${PROJECT_SOURCE_DIR})

# Add sub-folders
add_subdirectory(${PROJECT_SOURCE_DIR})




# Install target
install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)


# CPack packaging
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/COPYING")
set(CPACK_PACKAGE_VERSION_MAJOR "${SSS_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${SSS_VERSION_MINOR}")
include(CPack)
