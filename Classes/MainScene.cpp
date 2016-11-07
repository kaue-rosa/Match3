#include "MainScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* MainScene::createScene()
{
    auto scene = Scene::create();
    auto layer = MainScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool MainScene::init()
{
    srand ((int)time(NULL));
    
    if ( !Layer::init() )
    {
        return false;
    }
    
    //auto visibleSize = Director::getInstance()->getVisibleSize();
    //Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    //gridLogic = GridLogic(4,4);
    GridLogic gl = GridLogic(4,4);
    gridLogic = &gl;
    gridLogic->PrintGrid();
    
    return true;
}
