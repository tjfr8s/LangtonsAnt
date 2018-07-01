/************************************************************
 * Author: Tyler Freitas
 * Date: 06/30/2018
 * Description: This class represents an Ant object. The ant
 * has the following properties:
 * - m_antRow: represents the row occupied by the ant.
 * - m_anCol: represents the column occupied by the ant.
 * - m_orientation: represents the direction the ant is 
 *   facing.
 * The Ant class is equipped with get and set functions for
 * each of the member variables. It has a rotate member
 * function that changes the direction of the ant left or
 * right by 90 degrees based on user input. The class also
 * has a move member function that moves the ant forward
 * a single space if it will not move past the maxRow and
 * maxCol passed to the move function.
************************************************************/

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


    bool move(int maxRow, int maxCols);
    

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
