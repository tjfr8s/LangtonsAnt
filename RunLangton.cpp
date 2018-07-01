#include "RunLangton.hpp"
#include "IntegerValidation.hpp"

int getMenu()
{
    system("clear");
    std::cout << "Choose an option: " << std::endl;
    std::cout << "1. Run Langton's Ant \n";
    std::cout << "2. Quit\n";

    int userChoice = intInputValidation(1, 2);
    return userChoice;
}

void runMenu()
{
    while(getMenu() != 2)
    {
        runLangton(10, 10, 10); 
    }
}

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
