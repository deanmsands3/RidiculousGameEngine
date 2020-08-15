set(CMAKE_CXX_STANDARD 17)

#Add sub-folders
add_subdirectory(EngineCore)

add_subdirectory(Configurator)
add_subdirectory(Assets)
add_subdirectory(TidyWorkers)
add_subdirectory(Entities)
add_subdirectory(Utils)

# Define sources and executable
set(${PROJECT_NAME}_SOURCES main.cpp )

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})


if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    target_compile_options(${PROJECT_NAME}  INTERFACE -fsized-deallocation)
endif()


target_link_libraries(${PROJECT_NAME} PUBLIC EngineCore)
target_link_libraries(${PROJECT_NAME} PUBLIC Utils)
target_link_libraries(${PROJECT_NAME} PUBLIC Configurator)
target_link_libraries(${PROJECT_NAME} PUBLIC Assets)
target_link_libraries(${PROJECT_NAME} PUBLIC Entities)
target_link_libraries(${PROJECT_NAME} PUBLIC TidyWorkers)
target_link_libraries(${PROJECT_NAME} PUBLIC sfml-graphics sfml-audio ${PYTHON_LIBRARIES})
target_link_libraries(${PROJECT_NAME} PUBLIC ${PYTHON_LIBRARIES})
