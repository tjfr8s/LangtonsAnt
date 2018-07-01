#include <iostream>
#include <cstdio>
#include <unistd.h>
#include "../Board.hpp"
#include "../Space.hpp"


int main()
{
    Board board1(2, 2, 2, 2);
    board1.print();
    system("pause");
    /*
    for(int i = 0; i < 23000; i++)
    {
        
        board1.print();
        board1.moveAnt();
    }
    */
    return 0;
}
