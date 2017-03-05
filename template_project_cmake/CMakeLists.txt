# Name of the project:
project(rguignar-template)

cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_STANDARD 11)

macro (add_sources)
    file (RELATIVE_PATH _relPath "${CMAKE_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}")
    foreach (_src ${ARGN})
        if (_relPath)
            list (APPEND SRCS "${_relPath}/${_src}")
        else()
            list (APPEND SRCS "${_src}")
        endif()
    endforeach()
    if (_relPath)
        # propagate SRCS to parent directory
        set (SRCS ${SRCS} PARENT_SCOPE)
    endif()
endmacro()

add_subdirectory(src)

message(STATUS "${SRCS}")

add_executable(${PROJECT_NAME} ${SRCS})
