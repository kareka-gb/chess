//
// Created by 91817 on 09-Feb-25.
//

#ifndef BOARD_H
#define BOARD_H
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <vector>

#include "utils/Square.h"

class Board {
private:
  std::vector<std::vector<Square *>> board;

public:
  Board();

  Square *get_square(Position Position);
  Square *get_square(int x, int y);
  void draw(sf::RenderWindow &window, std::vector<sf::Texture> &textures);
};

#endif // BOARD_H
