//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "../utils/moves.h"
#include "Piece.h"

class Queen : public Piece {
  bool can_move(Board *board, Position *from, Position *to) override {
    return can_rook_move(board, from, to) || can_bishop_move(board, from, to);
  }
};
