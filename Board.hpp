/************************************************************
 * Author: Tyler Freitas
 * Date: 06/30/2018
 * Description: This class represents a board on which to 
 * simulate Langton's Ant. Board has the following data:
 * - m_Rows: the number of rows on the board.
 * - m_Cols: the number of columns on the board.
 * - m_board: a 2D dynamic array of Space objects that 
 *   represents the board.
 * - m_ant: represents the ant on the board.
 *
 * The board's constructor initializes the number of rows
 * and columns to the passed values and dynamically allocates
 * space for a 2D array of space objects with those dimensions.
 * It also initializes the position of the ant to 
 * (numRows/2, numCols/2) putting it near the center of the board.
 *
 * The antLeave(int row, int col) member function updates the 
 * space at the passed location to not contain the ant. The
 * antEnter(int row, int col) member function updates the space
 * at the passed location to contain the ant.
 *
 * The moveAnt() member function causes the ant to move forward 
 * a single space and turn left if the space it is entering is 
 * black and right if it is white. It also calls antEnter()
 * and antLeave() on the appropriate board locations to update
 * them.
 ************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include "Ant.hpp"
#include "Space.hpp"
#include "Board.hpp"

class Board
{

private:
    int m_numRows;
    int m_numCols;
    Space** m_board;
    Ant m_ant;
    

public:
/************************************************************
 * Description: 
 * Preconditions:
 *      Parameters: 
 *      numRows: integer number of rows
 *      numCols: integer number of columns
 * Postconditions:
 *      Initializes m_numRows to numRows
 *      Initializes m_numCols to numCols
 *      Initializes position of ant object to numRows/2, numCols/2
 *      Dynamically allocates 2D array of space objects of siz
 *      m_numRows x m_numCols
 ************************************************************/
    Board(int numRows, int numCols);    

    
/************************************************************
 * Description:
 * Preconditions:
 *      Board object goes out of scope.
 * Postconditions:
 *      2D array of space objects is deallocated.
 ************************************************************/
    ~Board();

    
/************************************************************
 * Description:
 * Preconditions: 
 *      m_board[row][col] is occupied by an ant object.
 * Postconditions:
 *      m_board[row][col]'s  m_occupied is set to false
 *      m_board[row][col]'s display character is updated
 *      to reflect new status. 
************************************************************/
    void antLeave(int row, int col);


/************************************************************
 * Description:
 * Preconditions: 
 *      m_board[row][col] is not occupied by an ant object.
 * Postconditions:
 *      m_board[row][col]'s  m_occupied is set to true. 
 *      m_board[row][col]'s display character is updated
 *      to reflect new status. 
************************************************************/
    void antEnter(int row, int col);


/************************************************************
 * Description:
 * Preconditions:
 *      - Board object with ant placed on a Space.
 * Postconditions:
 *      - If the ant is not facing an edge of the board, it
 *      will move forward one space and the new space and old
 *      space will be updated to reflect the move.
 *      - The ant will rotate based on the color of the square
 *      it just entered. WHITE: right, BLACK: left.
 *      -
************************************************************/
    void moveAnt();


/************************************************************
 * Description:
 * Preconditions:
 *      Board object.
 * Postconditions:
 *      Display board object to console.
 ************************************************************/
    void print();

};

#endif
