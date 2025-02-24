//
// Created by 91817 on 09-Feb-25.
//

#ifndef PIECE_H
#define PIECE_H
#include <SFML/Graphics/Sprite.hpp>

#include "../utils/Position.h"

class Board;

class Piece {
protected:
  // used for fast logic
  int color;
  // used for graphics
  sf::Sprite *sprite;
  Position *curr_position;

public:
  Piece();
  Piece(int color, sf::Sprite *sprite);
  virtual ~Piece() = default;

  int get_color();
  Position *get_position();

  void set_color(int color);
  void set_position(Position *position);

  virtual bool can_move(Board *board, Position *from, Position *to);
};

#endif // PIECE_H
