set(CMAKE_CXX_STANDARD 17)

#Add sub-folders
add_subdirectory(EngineCore)

# Define sources and executable
set(${PROJECT_NAME}_SOURCES main.cpp )

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})

target_link_libraries(${PROJECT_NAME} PUBLIC EngineCore)
target_link_libraries(${PROJECT_NAME} PUBLIC sfml-graphics sfml-audio ${PYTHON_LIBRARIES})
target_link_libraries(${PROJECT_NAME} PUBLIC ${PYTHON_LIBRARIES})
