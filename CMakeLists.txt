cmake_minimum_required(VERSION 3.28)

project(SDLTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL3 CONFIG REQUIRED)

add_executable(SDLTest

    src/main.cpp

    src/GameMode.cpp

    src/GameEngine/GameEngine.cpp

    src/GameEngine/Window.cpp

)

target_sources(SDLTest

    PUBLIC

    FILE_SET CXX_MODULES

    FILES

        src/GameMode.cppm

        src/GameEngine/GameEngine.cppm

        src/GameEngine/Window.cppm

)

target_compile_options(SDLTest PRIVATE

    -fmodules-ts

)

target_link_libraries(SDLTest PRIVATE SDL3::SDL3)



