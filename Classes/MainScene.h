#ifndef MainScene_h
#define MainScene_h

#include <stdio.h>

#include "cocos2d.h"
#include "GridLogic.h"

#endif /* MainScene_hpp */

class MainScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    
    CREATE_FUNC(MainScene);

private:
    GridLogic *gridLogic;
};
