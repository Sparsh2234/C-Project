cmake_minimum_required(VERSION 3.17)
project(project1)

set(CMAKE_CXX_STANDARD 14)

add_executable(project1 dequeaslisttest.cpp BrowserHistory.cpp BrowserHistory.h WebsiteData.cpp WebsiteData.h WebsiteList.cpp WebsiteList.h)