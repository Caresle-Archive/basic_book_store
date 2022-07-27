cmake_minimum_required(VERSION 3.0)

project(Book)

set(SOURCE main.cc)

add_library(
    BookStore
    book.hpp
    book.cc
)

add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(${PROJECT_NAME} PRIVATE BookStore)
