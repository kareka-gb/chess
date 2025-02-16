#ifndef MOVES_H
#define MOVES_H

#include "../Board.h"
#include "Position.h"

bool can_bishop_move(Board *board, Position *from, Position *to);
bool can_rook_move(Board *board, Position *from, Position *to);

#endif
