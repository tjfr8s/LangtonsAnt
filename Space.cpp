#include "Space.hpp"

Space::Space()
{
    setSpaceColor(WHITE);
    setOccupied(false);
    setDisplayChar(' ');
}


void Space::updateDisplayChar()
{
    if(m_occupied)
    {
        setDisplayChar('*');
    }

    else if(getSpaceColor() == WHITE &&
            getDisplayChar != ' ')
    {
        setDisplayChar(' ');
    }

    else if(getSpaceColor() == BLACK &&
            getDisplayChar != '#')
    {
        setDisplayChar('#');
    }

    return;
}


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


SpaceColor Space::getSpaceColor()
{
    return m_spaceColor;
}


char Space::getDisplayChar()
{
    return m_displayChar;
}


bool Space::isOccupied()
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
