FIND_PACKAGE(Threads REQUIRED)
FIND_PACKAGE(GTest)

SET(CMAKE_BUILD_TYPE Debug)

IF (NOT GTEST_FOUND)
  MESSAGE(FATAL_ERROR "GTest not found!")
ENDIF()

INCLUDE_DIRECTORIES(${GTEST_INCLUDE_DIRS})

SET(GMOCK_LIBRARIES "gmock")

# Set compiler flags.
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -std=c++11")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

SET(TEST_SOURCES TestsMain.cpp
                 TestMyClass.cpp)
ADD_EXECUTABLE(Tests ${TEST_SOURCES})

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/../lib/)

TARGET_LINK_LIBRARIES(Tests ${GTEST_BOTH_LIBRARIES}
                            ${GMOCK_LIBRARIES}
                            ${CMAKE_THREAD_LIBS_INIT}
                            libMyClass)

ADD_TEST(AllTests Tests)