SET(test_softmax_SRCS
	test_softmax.cpp
	test_main.cpp
)

ADD_EXECUTABLE(test_softmax ${test_softmax_SRCS})

TARGET_LINK_LIBRARIES(test_softmax
	softmax_lib
	libgtest
	libgmock
)

add_test(NAME test_softmax
	COMMAND test_softmax
)