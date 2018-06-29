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
    bool isOccupied();

    void setSpaceColor(SpaceColor color);
    void setDisplayChar(char displayChar);
    void setOccupied(bool occupied);

private:
    SpaceColor m_spaceColor;
    char m_displayChar;
    bool m_occupied;
};

#endif
