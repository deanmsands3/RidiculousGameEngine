cmake_minimum_required(VERSION 3.0)
project(Configurator VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

set(CONFIGURATOR_SOURCES src/Configurator.cpp src/ConfigPlatform.cpp)
set(CONFIGURATOR_HEADERS include/Configurator.h include/ConfigPlatform.h)
add_library(${PROJECT_NAME} ${CONFIGURATOR_SOURCES} ${CONFIGURATOR_HEADERS})
target_include_directories(${PROJECT_NAME} PUBLIC include)
