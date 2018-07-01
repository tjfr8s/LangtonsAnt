/************************************************************
 * Author: Tyler Freitas
 * Date: 07/01/2018
 * Description: This class represents a space on a board
 * for implementing Langton's ant. Each space has the following 
 * data members:
 *      m_spaceColor: stores the color of the space.
 *      m_displayChar: sotres the character that is printed 
 *      when the space is printed to the console.
 *      m_occupied: boolean value that is true when an
 *      ant occupies the space and false otherwise.
 * The Space class has member functions for toggling its color,
 * updating its character to reflect is occupation status and color,
 * as well as get and set functions for each data member.
************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

class Space
{
public: 
    enum SpaceColor
    {
        WHITE,
        BLACK
    };

    /************************************************************
     * Description:
     * Preconditions:
     *      Cretae a new Space object.
     * Postconditions"
     *      New space object intitialzed with m_occupied = false,
     *      m_spaceColor = WHITE, and m_displayChar = ' '.
    ************************************************************/
    Space();


    /************************************************************
     * Description:
     * Preconditions:
     *      Change the color or occupation status of a Space 
     *      object.
     * Postconditions:
     *      Space object's display character will be updated
     *      to reflect above changes.
    ************************************************************/
    void updateDisplayChar();


    /************************************************************
     * Description:
     * Preconditions:
     *      Space object created.
     * Postconditions:
     *      Color of space object will be changed to other option.
    ************************************************************/
    void toggleColor();


    SpaceColor getSpaceColor();
    char getDisplayChar();
    bool getOccupied();

    void setSpaceColor(SpaceColor color);
    void setDisplayChar(char displayChar);
    void setOccupied(bool occupied);

private:
    SpaceColor m_spaceColor;
    char m_displayChar;
    bool m_occupied;
};

#endif
