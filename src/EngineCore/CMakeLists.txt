cmake_minimum_required(VERSION 3.0)

# EngineCore Library
project(EngineCore VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

# EngineCore Sources
set(ENGINECORE_SOURCES src/EngineCore.cpp)
set(ENGINECORE_HEADERS include/EngineCore.h src/Sandbox.cpp include/Sandbox.h)
add_library(${PROJECT_NAME} ${ENGINECORE_SOURCES} ${ENGINECORE_HEADERS} src/Sandbox.cpp include/Sandbox.h)
target_include_directories(${PROJECT_NAME} PUBLIC include)

# Includes
add_subdirectory(Utils)
target_link_directories(${PROJECT_NAME}  PUBLIC Utils)
find_package(Threads)
find_package(nlohmann_json REQUIRED)
find_package(pybind11 REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC nlohmann_json::nlohmann_json)
target_link_libraries(${PROJECT_NAME} PUBLIC AssetLib)
target_link_libraries(${PROJECT_NAME} PUBLIC TidyWorkers)
target_link_libraries(${PROJECT_NAME} PRIVATE pybind11::embed)
