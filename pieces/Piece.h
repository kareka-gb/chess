//
// Created by 91817 on 09-Feb-25.
//

#ifndef PIECE_H
#define PIECE_H
#include <string>

#include "../Board.h"
#include "../utils/Position.h"


class Piece {
protected:
    std::string color;
    Position position;

public:
    Piece();
    Piece(std::string color, Position position);
    virtual ~Piece() = default;

    std::string get_color();
    Position get_position();

    void set_color(std::string color);
    void set_position(Position position);

    void move(Board board);
};



#endif //PIECE_H
