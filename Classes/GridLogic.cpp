#include "GridLogic.h"

GridLogic::GridLogic(unsigned short rows, unsigned short cols)
{
    this->rows = rows;
    this->cols = cols;
    
    grid = std::vector<std::vector<BlockTypes>>(rows);
    for(short i = 0; i < rows; i++)
    {
        grid[i] = std::vector<BlockTypes>(cols);
        
        for(short ii = 0; ii < cols; ii++)
        {
            BlockTypes randBlockType = (BlockTypes)(rand() % (int)BlockTypes::SIZE);
            grid[i][ii] = randBlockType;
        }
    }
}

void GridLogic::PrintGrid()
{
    cocos2d::log("\n");
    for(short i = 0; i < grid.size(); i++)
    {
        std::string line = "";
        for(short ii = 0; ii < grid[i].size(); ii++)
        {
            line.append("[");
            line.append(std::to_string((int)grid[i][ii]));
            line.append("]");
        }
        cocos2d::log("%s", line.c_str());
    }
    cocos2d::log("\n");
}
