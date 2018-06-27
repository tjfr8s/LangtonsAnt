#ifndef ANT_HPP
#define ANT_HPP

class Ant
{
public: 
    enum AntDirection
    {
        LEFT,
        RIGHT,
        UP,
        DOWN
    };

    void setRow(int row);
    void setCol(int col);
    void setOrientation(AntDirection orientation);

    int getRow();
    int getCol();
    Ant::AntDirection getOrientation();

    Ant(int row, int col);

private:
    int m_antRow;
    int m_antCol;
    
    Ant::AntDirection m_orientation;
};

#endif
