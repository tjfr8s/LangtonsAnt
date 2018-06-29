#include <iostream>
#include <cstdio>
#include "../Space.hpp"

int main()
{
    Space space1;
    printf("Color: %i, Character: %c, Occupied, %s\n",
            space1.getSpaceColor(),
            space1.getDisplayChar(),
            (space1.getOccupied() ? "true" : "false"));

    space1.toggleColor();
    printf("Color: %i, Character: %c, Occupied, %s\n",
            space1.getSpaceColor(),
            space1.getDisplayChar(),
            (space1.getOccupied() ? "true" : "false"));

    space1.updateDisplayChar();
    printf("Color: %i, Character: %c, Occupied, %s\n",
            space1.getSpaceColor(),
            space1.getDisplayChar(),
            (space1.getOccupied() ? "true" : "false"));

    space1.toggleColor();
    printf("Color: %i, Character: %c, Occupied, %s\n",
            space1.getSpaceColor(),
            space1.getDisplayChar(),
            (space1.getOccupied() ? "true" : "false"));

    space1.updateDisplayChar();
    printf("Color: %i, Character: %c, Occupied, %s\n",
            space1.getSpaceColor(),
            space1.getDisplayChar(),
            (space1.getOccupied() ? "true" : "false"));
    
    space1.setOccupied(true);;
    printf("Color: %i, Character: %c, Occupied, %s\n",
            space1.getSpaceColor(),
            space1.getDisplayChar(),
            (space1.getOccupied() ? "true" : "false"));

    space1.updateDisplayChar();
    printf("Color: %i, Character: %c, Occupied, %s\n",
            space1.getSpaceColor(),
            space1.getDisplayChar(),
            (space1.getOccupied() ? "true" : "false"));

    return 0;
}
