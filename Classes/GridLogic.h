#ifndef GridLogic_hpp
#define GridLogic_hpp

#include <stdio.h>

enum BlockTypes
{
    RED = 0,
    GREEN = 1,
    BLUE = 2,
    YELLOW = 3,
    MAGENTA = 4,
    
    SIZE = 5
};

class GridLogic
{

private:
    unsigned short rows;
    unsigned short cols;

    std::vector<std::vector<BlockTypes>> grid;
    
    
public:
    GridLogic (unsigned short rows, unsigned short cols);
    void PrintGrid ();

};


#endif /* GridLogic_hpp */
