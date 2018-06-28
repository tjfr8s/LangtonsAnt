#include <iostream>
#include <cstdio>
#include "../Ant.hpp"

int main()
{
    // Test Ant constructor
    Ant ant1(1, 2);

    printf("Ant row: %i \n"
           "Ant col: %i \n"
           "Ant orientation: %i \n",
            ant1.getRow(),
            ant1.getCol(),
            ant1.getOrientation());

    // Test Ant::rotate()

    ant1.setOrientation(Ant::UP);
    printf("\nOrientation set UP: %i \n",
            ant1.getOrientation());

    ant1.rotate('l');
    printf("Rotating left from UP: %i \n",
            ant1.getOrientation());

    ant1.rotate('l');
    printf("Rotating left from LEFT: %i \n",
            ant1.getOrientation());

    ant1.rotate('r');
    printf("Rotating right from DOWN: %i \n",
            ant1.getOrientation());

    ant1.rotate('r');
    printf("Rotating right from LEFT: %i \n",
            ant1.getOrientation());


    // Test Ant::move()

    Ant ant2(2,2);
    printf("Current position is row: "
           "%i, col: %i\n",
            ant2.getRow(), ant2.getCol());

    ant2.move(3, 3);
    printf("After move left row: "
           "%i, col: %i\n",
            ant2.getRow(), ant2.getCol());

    ant2.rotate('l');
    ant2.move(3, 3);
    printf("After move down row: "
           "%i, col: %i\n",
            ant2.getRow(), ant2.getCol());

    ant2.rotate('l');
    ant2.move(3, 3);
    printf("After move right row: "
           "%i, col: %i\n",
            ant2.getRow(), ant2.getCol());

    ant2.rotate('l');
    ant2.move(3, 3);
    printf("After move up row: "
           "%i, col: %i\n",
            ant2.getRow(), ant2.getCol());
           
}
