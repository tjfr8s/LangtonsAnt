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

    Space(bool occupied);

    void updateDisplayChar();

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
