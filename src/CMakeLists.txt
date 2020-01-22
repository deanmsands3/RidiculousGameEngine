#Add EngineCore
set(EngineCoreFolder EngineCore)
add_subdirectory(${EngineCoreFolder})
link_directories(${EngineCoreFolder})

# Define sources and executable
set(${PROJECT_NAME}_SOURCES main.cpp )
add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})
