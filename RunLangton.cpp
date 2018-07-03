/************************************************************
 * Author: Tyler Freitas
 * Date: 07/01/2018
 * Description: This file contains a function for printing a
 * menu and getting a selection from the user, a function for 
 * using the menu to control the simulation of Langton's ant, 
 * and a function for simulating Langton's ant to the users
 * specifications.
************************************************************/
#include "RunLangton.hpp"


/************************************************************
 * Description:
 * Preconditions:
 *      Parameters:
 *              numRows: number of rows in Langton's ant board
 *              numCols: number of columns in Langton's ant board
 *              numSteps: number of steps the simulation should run.
 * Postconditions:
 *      Langtons ant simulation is displayed on a board of the
 *      passed size and for the passed number of steps.
 ************************************************************/
void runLangton(int numSteps, int numRows, int numCols, int antRow, int antCol)
{
    Board board(numRows, numCols, antRow, antCol);
    board.print();
    usleep(1000000);
    for(int step = 0; step < numSteps; step++)
    {
        system("clear");
        board.moveAnt();
        board.print();
        usleep(1000000);
    }

    return;
}
