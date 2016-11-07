#ifndef GridInteractive_h
#define GridInteractive_h

#include "cocos2d.h"
#include "GridLogic.h"

class GridInteractive : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    
    CREATE_FUNC(GridInteractive);
    
private:
    GridLogic *gridLogic;
};

#endif /* GridInteractive_h */
