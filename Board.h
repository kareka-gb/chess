//
// Created by 91817 on 09-Feb-25.
//

#ifndef BOARD_H
#define BOARD_H
#include <vector>

#include "utils/Square.h"

class Board {
private:
  std::vector<std::vector<Square *>> board;

public:
  Square *get_square(Position Position);
  Square *get_square(int x, int y);
};

#endif // BOARD_H
