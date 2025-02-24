#include "Game.h"
#include "Board.h"

Game::Game() { this->board = new Board(); }

void Game::start() {
  sf::RenderWindow window(sf::VideoMode({800, 800}), "CHESS");

  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    window.clear();

    std::vector<sf::Texture> textures;
    // white texture at index = 0
    textures.emplace_back(sf::Texture("assets/img/texture/white.jpg", false,
                                      sf::IntRect({0, 0}, {100, 100})));
    // black texture at index = 1;
    textures.emplace_back(sf::Texture("assets/img/texture/black.jpg", false,
                                      sf::IntRect({0, 0}, {100, 100})));
    for (auto &texture : textures) {
      texture.setSmooth(true);
    }
    this->board->draw(window, textures);
    window.display();
  }
}
