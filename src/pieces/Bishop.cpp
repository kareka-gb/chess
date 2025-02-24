//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "../utils/moves.h"
#include "Piece.h"

class Bishop : public Piece {
public:
  Bishop(int color, sf::Sprite *sprite) : Piece(color, sprite) {}
  bool can_move(Board *board, Position *from, Position *to) override {
    return can_bishop_move(board, from, to);
  }
};
