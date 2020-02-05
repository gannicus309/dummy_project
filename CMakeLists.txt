cmake_minimum_required(VERSION 3.0)
project(visitor)

set(CMAKE_CXX_STANDARD 14)
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
enable_testing()
include(AddGoogleTest)


add_executable(visitor
            "DayMode.cpp"
            "NightMode.cpp"
            "Relay.cpp"
            "RGB.cpp"
            "main.cpp")


#add_library(client
#            "client.cc")

#target_link_libraries(client device)

#add_executable(singleton "main.cc")
#add_gtest(singleton)
#target_link_libraries(singleton PRIVATE client)


#add_executable(tests "test.cc")
#add_gtest(tests)

#target_link_libraries(tests PRIVATE client)
