cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_library(untitled STATIC json_parser.cpp
        json_value.h
        lexer.cpp
        lexer.h)
