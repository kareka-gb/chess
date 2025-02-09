cmake_minimum_required(VERSION 3.30)
project(chess)

set(CMAKE_CXX_STANDARD 23)

add_executable(chess main.cpp
        pieces/Piece.cpp
        pieces/Piece.h
        utils/Position.cpp
        utils/Position.h
        pieces/Rook.cpp
        pieces/Knight.cpp
        pieces/Bishop.cpp
        pieces/Pawn.cpp
        pieces/King.cpp
        pieces/Queen.cpp
        Board.cpp
        Board.h
)

