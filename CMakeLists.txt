cmake_minimum_required(VERSION 3.0.0)
project(sec_cur VERSION 0.1.0)
add_library(RaceSim SHARED Air.cpp Air.h Exception.h Exception.cpp Ground.h Ground.cpp Race.cpp Race.h TC.cpp TC.h)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_executable(sec_cur main.cpp Air.cpp Air.h Exception.h Exception.cpp Ground.h Ground.cpp Race.cpp Race.h TC.cpp TC.h) 