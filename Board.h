//
// Created by 91817 on 09-Feb-25.
//

#ifndef BOARD_H
#define BOARD_H
#include <vector>

#include "pieces/Piece.h"


class Board {
    int rows = 8;
    int cols = 8;
    std::vector<std::vector<Piece>> board;
};



#endif //BOARD_H
