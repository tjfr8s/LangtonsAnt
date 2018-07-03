#include <iostream>
#include <cstdio>
#include <unistd.h>
#include <string>
#include "../Board.hpp"
#include "../Space.hpp"


void printAnt(Board &board, std::string string)
{
    printf("%s numRows: %i, numCols: %i, antRow: %i, antCol: %i, antOr: %i\n", 
            string.c_str(), board.getRows(), board.getCols(),
            board.getAnt().getRow(), board.getAnt().getCol(), 
            static_cast<int>(board.getAnt().getOrientation()));

        return;
}
int main()
{
    Board board1(5, 5, 2, 2);
    board1.print();
    printAnt(board1, "Constructor test: 2, 2, 2, 2");

    board1.antLeave(1, 1);
    board1.print();
    printAnt(board1, "Constructor test: 2, 2, 2, 2");


    board1.antEnter(1, 1);
    board1.print();
    printAnt(board1, "Constructor test: 2, 2, 2, 2");

    board1.moveAnt();
    board1.print();
    printAnt(board1, "Constructor test: 2, 2, 2, 2");
    
    
    Board board2(2,2,1,1);
    printAnt(board2, "Constructor test: 2, 2, 2, 2");
    board2.print();
    board2.moveAnt(); 
    board2.print();
    printAnt(board2, "Constructor test: 2, 2, 2, 2");

    /*
    for(int i = 0; i < 23000; i++)
    {
        
        board1.print();
        board1.moveAnt();
    }
    */
    return 0;
}
