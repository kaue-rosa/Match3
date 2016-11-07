#include "GridInteractive.h"

USING_NS_CC;

Scene* GridInteractive::createScene()
{
    auto scene = Scene::create();
    auto layer = GridInteractive::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool GridInteractive::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    GridLogic gi = GridLogic(4,4);
    gridLogic = &gi;
    gridLogic->PrintGrid();
    
    Sprite *sprite = Sprite::create("White_square.png");
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    sprite->setColor(Color3B(255,255,0));
    this->addChild(sprite, 0);
    
    return true;
}
