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
}
