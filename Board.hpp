#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include "Ant.hpp"
#include "Space.hpp"

class Board
{

private:
    int m_numRows;
    int m_numCols;
    Space** m_board;
    Ant m_ant;
    

public:
    Board(int numRows, int numCols);    
    ~Board();

    
    void antLeave(int row, int col);
    void antEnter(int row, int col);

    void print();

};

#endif
