//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "Piece.h"

class Pawn : public Piece {
  bool can_move(Board *board, Position *from, Position *to) override {}
};
