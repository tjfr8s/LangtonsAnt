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

    void setRow(int row);
    void setCol(int col);
    void setOrientation(AntDirection orientation);

    void rotate(char direction);

    int getRow();
    int getCol();
    Ant::AntDirection getOrientation();

private:
    int m_antRow;
    int m_antCol;
    
    Ant::AntDirection m_orientation;
};

#endif
