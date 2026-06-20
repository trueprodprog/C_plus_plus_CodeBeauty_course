cmake_minimum_required(VERSION 4.1)
project(C_plus_plus_CodeBeauty_course)

set(CMAKE_CXX_STANDARD 20)

add_executable(C_plus_plus_CodeBeauty_course main.cpp)
add_executable(wordEncryptor wordEncryptorASCII.cpp)
add_executable(if_else_stat if_else_statements/if_else_stat1.cpp
        if_else_statements/if_else_stat2.cpp)
