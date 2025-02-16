#ifndef SQUARE_H
#define SQUARE_H

#include "../pieces/Piece.h"

class Square {
private:
  int color;
  Piece *piece;

public:
  Square(int color, Piece *piece);

  int get_color();
  Piece *get_piece();

  void set_color(int color);
  void set_piece(Piece *piece);

  bool is_occupied();
};

#endif
