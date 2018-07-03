/************************************************************
 * Author: Tyler Freitas
 * Date: 06/30/2018
 * Description: This class represents an Ant object. The ant
 * has the following properties:
 * - m_antRow: represents the row occupied by the ant.
 * - m_anCol: represents the column occupied by the ant.
 * - m_orientation: represents the direction the ant is 
 *   facing.
 * The Ant class is equipped with get and set functions for
 * each of the member variables. It has a rotate member
 * function that changes the direction of the ant left or
 * right by 90 degrees based on user input. The class also
 * has a move member function that moves the ant forward
 * a single space if it will not move past the maxRow and
 * maxCol passed to the move function.
************************************************************/

#include "Ant.hpp"

/************************************************************
 * Description:
 * Preconditions:
 *      Parameters:
 *          int row 
 *          int col
 *
 * Postconditions:
 *      Ant.m_row is set to row.
 *      Ant.m_col is set to col.
 *      Ant.m_orientation is set to LEFT.
************************************************************/
Ant::Ant(int row, int col)
{
    setRow(row);
    setCol(col);   
    setOrientation(LEFT);
}


/************************************************************
 * Description: Rotates ant in specified direction.
 * Preconditions:
 *      Parameters:
 *          char direction equals 'l' or 'r'
 * Postconditions:
 *      ant.m_orientation will move 90 degrees in the
 *      specified direction.
************************************************************/
void Ant::rotate(char direction)
{
    int orientationInt = static_cast<int>(m_orientation);


    if(direction == 'l' && m_orientation != LEFT)
    {
        orientationInt -= 1;
        setOrientation(static_cast<Ant::AntDirection>(orientationInt));
    }
    
    else if(direction == 'l')
    {
        setOrientation(Ant::DOWN);
    }

    if(direction == 'r' && m_orientation != DOWN)
    {
        orientationInt += 1;
        setOrientation(static_cast<Ant::AntDirection>(orientationInt));
    }

    else if(direction == 'r')
    {
        setOrientation(Ant::LEFT);
    }

    return;
}


/************************************************************
 * Description:
 * Preconditions:
 *      Parameters:
 *          integer value for maximum number of columns.
 *          integer value for maximum number of rows.
 * Postconditions:
 *      The function moves the ant forward one space in the direction
 *      it is facing. If the movement will move the ant out 
 *      of bounds, it stays in the square it is currently
 *      occupying and rotates right 90 degrees. The function
 *      returns true if the ant successfully moves forward
 *      and false if it is forced to rotate instead.
 ************************************************************/
bool Ant::move(int maxRow, int maxCols)
{
    bool isInBounds(false);


    // Move ant forward one space if it isn't at the
    // edge of the board
    switch(getOrientation())
    {
        case LEFT:

            if(getCol() - 1 >= 0)
            {
                setCol(getCol() - 1);
                isInBounds = true;
            }
            break;

        case UP:

            if(getRow() - 1 >= 0)
            {
                setRow(getRow() - 1);
                isInBounds = true;
            }
            break;

        case RIGHT:

            if(getCol() + 1 <  maxCols)
            {
                setCol(getCol() + 1);
                isInBounds = true;
            }
            break;

        case DOWN:

            if(getRow() + 1 < maxRow)
            {
                setRow(getRow() + 1);
                isInBounds = true;
            }
            break;
    };


    // Rotate the ant to the right if it hit a wall.
    if(!isInBounds)
    {
        rotate('r');
    }

    return isInBounds;
}


void Ant::setRow(int row)
{
    m_antRow = row;
}

void Ant::setCol(int col)
{
    m_antCol = col;
}

void Ant::setOrientation(AntDirection orientation)
{
    m_orientation = orientation;
}

int Ant::getRow()
{
    return m_antRow;
}

int Ant::getCol()
{
    return m_antCol;
}

Ant::AntDirection Ant::getOrientation()
{
    return m_orientation;
}
