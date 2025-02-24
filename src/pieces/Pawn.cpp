//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "Piece.h"

class Pawn : public Piece {
public:
  Pawn(int color, sf::Sprite *sprite) : Piece(color, sprite) {}
  bool can_move(Board *board, Position *from, Position *to) override {
    // TODO: conditions when pawn can move
    return false;
  }
};
