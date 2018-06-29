#include "Space.hpp"

/************************************************************
 * Description:
 * Preconditions:
 *      Cretae a new Space object.
 * Postconditions"
 *      New space object intitialzed with m_occupied = false,
 *      m_spaceColor = WHITE, and m_displayChar = ' '.
************************************************************/
Space::Space()
{
    setSpaceColor(WHITE);
    setOccupied(false);
    setDisplayChar(' ');
}


/************************************************************
 * Description:
 * Preconditions:
 *      Change the color or occupation status of a Space 
 *      object.
 * Postconditions:
 *      Space object's display character will be updated
 *      to reflect above changes.
************************************************************/
void Space::updateDisplayChar()
{
    if(m_occupied)
    {
        setDisplayChar('*');
    }

    else if(getSpaceColor() == WHITE &&
            getDisplayChar() != ' ')
    {
        setDisplayChar(' ');
    }

    else if(getSpaceColor() == BLACK &&
            getDisplayChar() != '#')
    {
        setDisplayChar('#');
    }

    return;
}


/************************************************************
 * Description:
 * Preconditions:
 *      Space object created.
 * Postconditions:
 *      Color of space object will be changed to other option.
************************************************************/
void Space::toggleColor()
{
    if(getSpaceColor() == WHITE)
    {
        setSpaceColor(BLACK);
    }

    else if(getSpaceColor() == BLACK)
    {
        setSpaceColor(WHITE);
    }

    return;
}


Space::SpaceColor Space::getSpaceColor()
{
    return m_spaceColor;
}


char Space::getDisplayChar()
{
    return m_displayChar;
}


bool Space::getOccupied()
{
    return m_occupied;
}


void Space::setSpaceColor(SpaceColor color)
{
    m_spaceColor = color;
    return;
}


void Space::setDisplayChar(char displayChar)
{
    m_displayChar = displayChar;
    return;
}


void Space::setOccupied(bool occupied)
{
    m_occupied = occupied;
    return;
}
