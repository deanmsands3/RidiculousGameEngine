#Add EngineCore
add_subdirectory(EngineCore)
link_directories(${SSS_SOURCE_DIR}/EnginerCore)

# Define sources and executable
set(${PROJECT_NAME}_SOURCES
        main.cpp
        )
