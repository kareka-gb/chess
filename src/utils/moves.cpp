#include "moves.h"

bool can_bishop_move(Board *board, Position *from, Position *to) {
  int fromX = from->getX();
  int fromY = from->getY();
  int toX = to->getX();
  int toY = to->getY();

  // current position is same as final position
  if (fromX == toX && fromY == toY) {
    return false;
  }

  // current position and final position must be on a diagonal
  if (abs(fromX - toX) != abs(fromY - toY)) {
    return false;
  }

  int dx = toX - fromX;
  int dy = toY - fromY;
  dx = dx / abs(dx);
  dy = dy / abs(dy);

  // if there are any pieces in between initial and final position not
  // including them then the move is not possible
  for (int x = fromX + dx, y = fromY + dy; x < toX && y < toY;
       x += dx, y += dy) {
    if (board->get_square(x, y)->is_occupied()) {
      return false;
    }
  }

  // if the final position contains same color piece, then move is not
  // possible
  if (board->get_square(toX, toY)->is_occupied() &&
      board->get_square(toX, toY)->get_piece()->get_color() ==
          board->get_square(fromX, fromY)->get_piece()->get_color()) {
    return false;
  }
  return true;
}

bool can_rook_move(Board *board, Position *from, Position *to) {
  int fromX = from->getX();
  int fromY = from->getY();
  int toX = to->getX();
  int toY = to->getY();

  // current position is same as final position
  if (fromX == toX && fromY == toY) {
    return false;
  }

  if (abs(fromX - toX) != 0 && abs(fromY - toY) != 0) {
    return false;
  }

  if (fromY == toY) {
    // rook moves horizontally
    int dx = (toX - fromX);
    dx = dx / abs(dx);
    for (int x = fromX + dx; x < toX; x += dx) {
      if (board->get_square(x, fromY)->is_occupied()) {
        return false;
      }
    }
  } else if (fromX == toX) {
    // rook moves vertically
    int dy = toY - fromY;
    dy = dy / abs(dy);
    for (int y = fromY + dy; y < toY; y += dy) {
      if (board->get_square(fromX, y)->is_occupied()) {
        return false;
      }
    }
  } else {
    // rook can only move horizontally or vertically so, atleast one of the
    // horizontal, vertical displacments must be zero
    return false;
  }

  // final position of the rook contains a piece of same color
  if (board->get_square(toX, toY)->is_occupied() &&
      board->get_square(toX, toY)->get_piece()->get_color() ==
          board->get_square(fromX, fromY)->get_piece()->get_color()) {
    return false;
  }
  return true;
}
