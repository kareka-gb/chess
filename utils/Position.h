//
// Created by 91817 on 09-Feb-25.
//

#ifndef POSITION_H
#define POSITION_H



class Position {
    int x = 0;
    int y = 0;

public:
    Position();
    Position(int x, int y);
    int getX() const;
    int getY() const;
};



#endif //POSITION_H
