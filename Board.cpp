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
#include "Board.hpp"
#include "Space.hpp"

/************************************************************
 * Description: 
 * Preconditions:
 *      Parameters: 
************************************************************/
Board::Board(int numRows, int numCols) 
    : m_numRows(numRows), 
      m_numCols(numCols),
      m_ant(numRows / 2, numCols/2)
{
    m_board = new Space* [numRows];
    for(int row = 0; row < numRows; row++)
    {
        m_board[row] = new Space[numCols];
    }

    //antEnter(numRows/2, numCols/2);
}


Board::~Board()
{
    for(int row = 0; row < m_numRows; row++)
    {
        delete  m_board[row];
    }

    delete [] m_board;
}


void Board::antLeave(int row, int col)
{
    m_board[row][col].setOccupied(false);
    m_board[row][col].updateDisplayChar();
}


void Board::antEnter(int row, int col)
{
    m_board[row][col].setOccupied(true);
    m_board[row][col].updateDisplayChar();
}


void Board::moveAnt()
{
    int antRow = m_ant.getRow();
    int antCol = m_ant.getCol();

    if(m_ant.move(m_numRows, m_numCols))
    {
        m_board[antRow][antCol].toggleColor();
        antLeave(antRow, antCol);
        if(m_board[m_ant.getRow()][m_ant.getCol()].getSpaceColor() == 
                Space::WHITE)
        {
            m_ant.rotate('r');
        }
        else
        {
            m_ant.rotate('l');
        }
    }
    antEnter(m_ant.getRow(), m_ant.getCol());
    return;
}


void Board::print()
{
    int boardWidth = m_numCols + 2;
    
    for(int col = 0; col < boardWidth; col++)
    {
        std::cout << "-";
    }
    std::cout << "\n";

    for(int row = 0; row < m_numRows; row++)
    {
        std::cout << "|";
        for(int col = 0; col < m_numCols; col++)
        {
            std::cout << m_board[row][col].getDisplayChar();
        }
        std::cout << "|\n";
    }

    for(int col = 0; col < boardWidth; col++)
    {
        std::cout << "-";
    }
    std::cout << "\n";
}
