//
// Created by 91817 on 09-Feb-25.
//

#include "Board.h"
#include "utils/Position.h"
#include "utils/Square.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <vector>

Board::Board() {
  board.resize(8, std::vector<Square *>(8, nullptr));
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      board[i][j] = new Square((i + j) % 2, nullptr);
    }
  }
}

Square *Board::get_square(Position position) {
  return this->board[position.getX()][position.getY()];
}

Square *Board::get_square(int x, int y) { return this->board[x][y]; }

void Board::draw(sf::RenderWindow &window, std::vector<sf::Texture> &textures) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      sf::Sprite sprite(textures[(i + j) % 2]);
      sprite.setPosition({(float)i * 100, (float)j * 100});
      window.draw(sprite);
    }
  }
}
