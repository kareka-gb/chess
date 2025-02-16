//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "../utils/moves.h"
#include "Piece.h"

class Bishop : public Piece {
  bool can_move(Board *board, Position *from, Position *to) override {
    return can_bishop_move(board, from, to);
  }
};
