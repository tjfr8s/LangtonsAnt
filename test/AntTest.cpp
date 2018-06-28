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
}
