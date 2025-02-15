#include "Square.h"

Square::Square(int color, Piece *piece) {
  this->color = color;
  this->piece = piece;
}

int Square::get_color() { return this->color; }
Piece *Square::get_piece() { return this->piece; }

void Square::set_color(int color) { this->color = color; }
void Square::set_piece(Piece *piece) { this->piece = piece; }

bool Square::is_occupied() {
  if (this->piece != nullptr) {
    return true;
  }
  return false;
}
