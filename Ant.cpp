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
