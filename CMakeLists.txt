cmake_minimum_required(VERSION 3.27)
project(Cosmic_Voyager_AdjunctLecturer)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc)
add_executable(Cosmic_Voyager_AdjunctLecturer main.cpp
        src/Asteroid_Event.cpp
        src/Gezegen_Event.cpp
        src/Uzay_Korsanlari_Event.cpp
        src/hesaplama_secim.cpp
        src/game_run.cpp)
