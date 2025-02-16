cmake_minimum_required(VERSION 3.30)
project(chess)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(chess src/main.cpp
        src/pieces/Piece.cpp
        src/pieces/Piece.h
        src/utils/Position.cpp
        src/utils/Position.h
        src/pieces/Rook.cpp
        src/pieces/Knight.cpp
        src/pieces/Bishop.cpp
        src/pieces/Pawn.cpp
        src/pieces/King.cpp
        src/pieces/Queen.cpp
        src/utils/Square.cpp
        src/utils/Square.h
        src/utils/moves.cpp
        src/utils/moves.h
        src/Board.cpp
        src/Board.h
)

target_compile_features(chess PRIVATE cxx_std_17)
target_link_libraries(chess PRIVATE SFML::Graphics)

