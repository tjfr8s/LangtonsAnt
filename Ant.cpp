#include "Ant.hpp"

Ant::Ant(int row, int col)
{
    setRow(row);
    setCol(col);   
    setOrientation(LEFT);
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
