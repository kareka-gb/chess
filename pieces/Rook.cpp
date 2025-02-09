//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "Piece.h"

class Rook : public Piece {
  bool move(Board &board, Position new_position) { return false; }
};
