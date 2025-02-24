//
// Created by 91817 on 09-Feb-25.
//

#include "Piece.h"

#include <SFML/Graphics/Sprite.hpp>

// Piece::Piece(std::string color, Position position): color(std::move(color)),
// position(position) {}
Piece::Piece() {};
Piece::Piece(int color, sf::Sprite *sprite) {
  this->color = color;
  this->sprite = sprite;
}

int Piece::get_color() { return this->color; }
Position *Piece::get_position() { return this->curr_position; }

void Piece::set_color(int color) { this->color = color; }
void Piece::set_position(Position *position) { this->curr_position = position; }
bool Piece::can_move(Board *board, Position *from, Position *to) {
  return false;
}
