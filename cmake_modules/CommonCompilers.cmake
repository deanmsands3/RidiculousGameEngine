include(CheckCXXCompilerFlag)

# Configure for GNU Compiler
IF (CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    CHECK_CXX_COMPILER_FLAG("-std=c++11" HAVE_STD_CXX11)
    IF(HAVE_STD_CXX11)
        SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    ENDIF(HAVE_STD_CXX11)

    # To use std::thread and friends, we must pass -lpthread and -pthread to the compiler and Linker for GCC
    IF (NOT WIN32)
        SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread")
        SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
        SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lpthread -pthread")
    ENDIF (NOT WIN32)
ENDIF (CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")

# We want RelWithDebInfo to actually include debug stuff (define _DEBUG
# instead of NDEBUG)
FOREACH(flag_var  CMAKE_C_FLAGS_RELWITHDEBINFO CMAKE_CXX_FLAGS_RELWITHDEBINFO)
    IF(${flag_var} MATCHES "-DNDEBUG")
        STRING(REGEX REPLACE "-DNDEBUG" "-D_DEBUG" ${flag_var} "${${flag_var}}")
    ENDIF()
ENDFOREACH()

IF (MSVC)
    # Add multi-processor compilation.
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
ENDIF ()
