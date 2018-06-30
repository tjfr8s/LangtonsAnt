#include <iostream>
#include <cstdio>
#include <unistd.h>
#include "../Board.hpp"
#include "../Space.hpp"


int main()
{
    Board board1(50, 90);
    for(int i = 0; i < 23000; i++)
    {
        
        board1.print();
        board1.moveAnt();
        usleep(1000000);
    }
    return 0;
}
