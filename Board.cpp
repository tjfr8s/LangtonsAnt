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
        m_board[row] = new Space;
    }
}


Board::~Board()
{
    for(int row = 0; row < m_numRows; row++)
    {
        delete  m_board[row];
    }

    delete [] m_board;
}


