cmake_minimum_required(VERSION 3.11)
project(test-app VERSION 1.0.0 DESCRIPTION "The main test application" LANGUAGES CXX)

add_executable(test-app "source/main.cpp")
target_compile_features(test-app PRIVATE cxx_std_17)
target_include_directories(test-app PRIVATE "include")
