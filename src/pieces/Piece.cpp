//
// Created by 91817 on 09-Feb-25.
//

#include "Piece.h"

#include <utility>

// Piece::Piece(std::string color, Position position): color(std::move(color)),
// position(position) {}
Piece::Piece() {};
Piece::Piece(std::string color) { this->color = std::move(color); }

std::string Piece::get_color() { return this->color; }
Position *Piece::get_position() { return this->curr_position; }

void Piece::set_color(std::string color) { this->color = std::move(color); }
void Piece::set_position(Position *position) { this->curr_position = position; }
bool Piece::can_move(Board *board, Position *from, Position *to) {
  return false;
}
