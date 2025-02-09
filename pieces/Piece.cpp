//
// Created by 91817 on 09-Feb-25.
//

#include "Piece.h"

#include <utility>

// Piece::Piece(std::string color, Position position): color(std::move(color)), position(position) {}
Piece::Piece()= default;

Piece::Piece(std::string color, Position position) {
    this->color = std::move(color);
    this->position = position;
}

std::string Piece::get_color() {
    return this->color;
}

Position Piece::get_position() {
    return this->position;
}

void Piece::set_position(Position position) {
    this->position = std::move(position);
}

void Piece::set_color(std::string color) {
    this->color = std::move(color);
}
