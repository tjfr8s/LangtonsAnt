/************************************************************
 * Author: Tyler Freitas
 * Date: 06/30/2018
 * Description: This program implements the Langton's ant
 * Turing machine in c++. When the program is run it asks
 * the user if they want to run the simulation or quit. If
 * they choose to quit, the program terminates. If they 
 * choose to run the simulation, they are asked to enter:
 *  - The size of the board they would like to use.
 *  - The number of iterations the program should perform.
 *  - The starting position and orientation of the ant.
 * The simulation is executed to the specifications of the 
 * user and they are asked if they would like to quit or 
 * run the simulation again.
************************************************************/

#include "Board.hpp"
#include "RunLangton.hpp"

int main()
{
    runMenu();
    return 0;
}
