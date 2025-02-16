//
// Created by 91817 on 09-Feb-25.
//

#ifndef PIECE_H
#define PIECE_H
#include <string>

#include "../utils/Position.h"

class Board;

class Piece {
protected:
  std::string color;
  Position *curr_position;

public:
  Piece();
  Piece(std::string color);
  virtual ~Piece() = default;

  std::string get_color();
  Position *get_position();

  void set_color(std::string color);
  void set_position(Position *position);

  virtual bool can_move(Board *board, Position *from, Position *to);
};

#endif // PIECE_H
