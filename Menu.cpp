#include "Menu.hpp"
/************************************************************
 * Author: Tyler Freitas
 * Date: 07/01/2018
 * Description: This file contains a function for printing a
 * menu and getting a selection from the user and a function
 * for controlling the execution of a program using a menu.
************************************************************/


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
 *      - The menu is contiuously displayed until the user
 *      chooses to quit.
 *      - The user is asked to enter a number of rows, columns
 *      and steps.
 *      - Langton's ant is simulated using the user input.
 ************************************************************/
void runMenu()
{
    int maxRows(50);
    int minRows(1);
    int maxCols(150);
    int minCols(1);
    int maxSteps(20000);
    int minSteps(1);
    while(getMenu() != 2)
    {
        printf("Enter a number of rows between %i and %i\n", 
                minRows, 
                maxRows);
        int userRows = intInputValidation(minRows, maxRows);
        printf("Enter a number of columns between %i and %i\n",
                minCols,
                maxCols);
        int userCols = intInputValidation(1, 150);
        printf("Enter a number of steps between %i and %i\n",
                minSteps,
                maxSteps);
        int userSteps = intInputValidation(1, 20000);
        printf("Enter a row for the ant between %i and %i\n",
                minRows,
                userRows);
        int antRow = intInputValidation(minRows, userRows);
        printf("Enter a column for the ant between %i and %i\n",
                minCols,
                userCols);
        int antCol = intInputValidation(minCols, userCols);
        system("clear");


        runLangton(userSteps, userRows, userCols, antRow, antCol); 
    }

    return;
}


