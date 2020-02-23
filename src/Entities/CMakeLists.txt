cmake_minimum_required(VERSION 3.0)
project(Entities VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Statics)
add_subdirectory(Actors)

set(ENTITIES_SOURCES src/Entity.cpp ${ACTORS_SOURCES} ${STATICS_SOURCES})
set(ENTITIES_HEADERS include/Entities.h include/Entity.h ${ACTORS_HEADERS} ${STATICS_HEADERS})
add_library(${PROJECT_NAME} ${ENTITIES_SOURCES} ${ENTITIES_HEADERS})
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC Utils)
