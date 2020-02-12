cmake_minimum_required(VERSION 3.0)
project(AssetLib VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

set(ASSETLIB_SOURCES src/ByteArray.cpp)
set(ASSETLIB_HEADERS include/ByteArray.h)
add_library(${PROJECT_NAME} ${ASSETLIB_SOURCES} ${ASSETLIB_HEADERS})
target_include_directories(${PROJECT_NAME} PUBLIC include)
