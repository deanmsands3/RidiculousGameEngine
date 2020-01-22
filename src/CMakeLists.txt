#Add EngineCore
set(EngineCoreFolder ${SSS_SOURCE_DIR}/EngineCore)
add_subdirectory(${EngineCoreFolder})
link_directories(${EngineCoreFolder})

# Define sources and executable
set(${PROJECT_NAME}_SOURCES
        main.cpp
        )
