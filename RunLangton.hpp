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
#ifndef RUNLANGTON_HPP
#define RUNLANGTON_HPP
#include <iostream>
#include <unistd.h>
#include "Board.hpp"

/************************************************************
 * Description:
 * Preconditions:
 *      Call function.
 * Postconditions:
 *      A menu is printed to the console.
 ************************************************************/
int  getMenu();


/************************************************************
 * Description:
 * Preconditions:
 *      Call function.
 * Postcondition:
 *      The menu is contiuously displayed until the user
 *      chooses to quit.
 ************************************************************/
void runMenu();


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
void runLangton(int steps, int numRows, int numCols);

#endif
