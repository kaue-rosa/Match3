#ifndef MainScene_h
#define MainScene_h

#include <stdio.h>

#include "cocos2d.h"
#include "GridInteractive.h"

class MainScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    
    CREATE_FUNC(MainScene);

private:
    GridInteractive *gridInteractive;
};

#endif /* MainScene_h */
