#ifndef ANT_HPP
#define ANT_HPP

class Ant
{
public: 
    Ant(int row, int col);


    enum AntDirection
    {
        LEFT,
        UP,
        RIGHT,
        DOWN
    };


    /************************************************************
     * Description: Rotates ant in specified direction.
     * Preconditions:
     *      Parameters:
     *          char direction equals 'l' or 'r'
     * Postconditions:
     *      ant.m_orientation will move 90 degrees in the
     *      specified direction.
    ************************************************************/
    void rotate(char direction);


    void setRow(int row);
    void setCol(int col);
    void setOrientation(AntDirection orientation);


    int getRow();
    int getCol();
    Ant::AntDirection getOrientation();
    

private:
    int m_antRow;
    int m_antCol;
    Ant::AntDirection m_orientation;
};

#endif
