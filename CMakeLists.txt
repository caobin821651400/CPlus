cmake_minimum_required(VERSION 3.17)
project(NativeTest)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

#动态库
add_library(android_dongtai SHARED jni/android_dongtai.c)
add_library(stringLib SHARED jni/StringTest.c)
add_library(field SHARED jni/FieldTest.c)
add_library(method SHARED jni/methodTest.c)


#C++
#set(APP_SRC cplus/demo01.cpp)
#add_executable(file ${APP_SRC} cplus/demo01.cpp)
#
#set(APP_SRC2 cplus/yinyong.cpp)
#add_executable(APP_SRC2 ${APP_SRC2} cplus/yinyong.cpp)
#
#set(APP_SRC3 cplus/yinyong2.cpp)
#add_executable(APP_SRC3 ${APP_SRC3} cplus/yinyong2.cpp)
#
#set(APP_SRC4 cplus/fun.cpp)
#add_executable(APP_SRC4 ${APP_SRC4} cplus/fun.cpp)
#
#set(APP_SRC5 cplus/fun2.cpp)
#add_executable(APP_SRC5 ${APP_SRC5} cplus/fun2.cpp)
#
#set(APP_SRC6 cplus/fun3.cpp)
#add_executable(APP_SRC6 ${APP_SRC6} cplus/fun3.cpp)
#
#set(APP_SRC7 mobject/Teacher.cpp)
#add_executable(APP_SRC7 ${APP_SRC7} mobject/Teacher.cpp)

aux_source_directory(./cplus APP_SRC_CPLUS)
add_executable(APP_SRC_CPLUS ${APP_SRC_CPLUS} )

aux_source_directory(./jni APP_SRC_JNI)
add_executable(APP_SRC_JNI ${APP_SRC_JNI} )

aux_source_directory(./mobject APP_SRC_OBJET)
add_executable(APP_SRC_OBJET ${APP_SRC_OBJET} )
