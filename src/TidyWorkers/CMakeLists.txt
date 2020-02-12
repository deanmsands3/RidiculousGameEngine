cmake_minimum_required(VERSION 3.0)
project(TidyWorkers VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

set(TIDYWORKERS_SOURCES src/TidyWorker.cpp src/TidyThread.cpp)
set(TIDYWORKERS_HEADERS include/TidyWorker.h include/TidyThread.h include/TidyWorkers.h)
add_library(${PROJECT_NAME} ${TIDYWORKERS_SOURCES} ${TIDYWORKERS_HEADERS})
target_include_directories(${PROJECT_NAME} PUBLIC include)
