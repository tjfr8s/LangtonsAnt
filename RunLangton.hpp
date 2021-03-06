/************************************************************
 * Author: Tyler Freitas
 * Date: 07/01/2018
 * Description: This file contains a function for simulating 
 * Langton's ant to the user's specifications.
************************************************************/
#ifndef RUNLANGTON_HPP
#define RUNLANGTON_HPP
#include <iostream>
#include <cstdio>
#include <unistd.h>
#include "RunLangton.hpp"
#include "Board.hpp"
#include "IntegerValidation.hpp"
#include "Menu.hpp"


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
void runLangton(int numSteps, int numRows, int numCols, int antRow, int antCol);
#endif
