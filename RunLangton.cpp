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
#include "IntegerValidation.hpp"


/************************************************************
 * Description:
 * Preconditions:
 *      Call function.
 * Postconditions:
 *      A menu is printed to the console.
 *      The user's choice is read into a variale and returned.
************************************************************/
int getMenu()
{
    system("clear");
    std::cout << "Choose an option: " << std::endl;
    std::cout << "1. Run Langton's Ant \n";
    std::cout << "2. Quit\n";

    int userChoice = intInputValidation(1, 2);
    return userChoice;
}


/************************************************************
 * Description:
 * Preconditions:
 *      Call function.
 * Postcondition:
 *      The menu is contiuously displayed until the user
 *      chooses to quit.
 ************************************************************/
void runMenu()
{
    while(getMenu() != 2)
    {
        runLangton(10, 10, 10); 
    }
}



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
void runLangton(int numRows, int numCols, int numSteps)
{
    Board board(numRows, numCols);
    for(int step = 0; step < numSteps; step++)
    {
        system("clear");
        board.moveAnt();
        board.print();
        usleep(1000000);
    }    
}
