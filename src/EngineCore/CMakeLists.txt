#Add EngineCore
set(UtilsFolder ${EngineCoreFolder})
add_subdirectory(${UtilsFolder})





link_directories(${UtilsFolder})
