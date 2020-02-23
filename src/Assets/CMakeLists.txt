cmake_minimum_required(VERSION 3.0)
project(Assets VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

set(ASSETLIB_SOURCES src/ByteArray.cpp src/ResourceManager.cpp src/AssetManager.cpp)
set(ASSETLIB_HEADERS include include/Assets.h include/ByteArray.h  include/ResourceManager.h include/AssetManager.h)
add_library(${PROJECT_NAME} ${ASSETLIB_SOURCES} ${ASSETLIB_HEADERS})
target_include_directories(${PROJECT_NAME} PUBLIC include)
