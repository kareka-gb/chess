#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "Board.h"

class Game {
private:
  Board *board;

public:
  Game();

  void start();
};

#endif // GAME_H
