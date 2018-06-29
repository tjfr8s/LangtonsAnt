/************************************************************
 * Author:
 * Date:
 * Description:
************************************************************/
#include "Board.hpp"
#include "Space.hpp"

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

    antEnter(numRows/2, numCols/2);
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
