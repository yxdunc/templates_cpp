## create a library with src file to be able to test with gtest ##
SET(softmax_lib_SRCS
	softmax.cpp
)

add_library(softmax_lib
    ${softmax_lib_SRCS}
)
target_include_directories(softmax_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
## ##

## create an executable with the main ##
SET(demo_SRCS
	main.cpp
)

add_executable(demo ${demo_SRCS})
TARGET_LINK_LIBRARIES(demo
	softmax_lib
)
## ##