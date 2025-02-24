//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "../utils/moves.h"
#include "Piece.h"

class Rook : public Piece {
public:
  Rook(int color, sf::Sprite *sprite) : Piece(color, sprite) {}
  bool can_move(Board *board, Position *from, Position *to) override {
    return can_rook_move(board, from, to);
  }
};
