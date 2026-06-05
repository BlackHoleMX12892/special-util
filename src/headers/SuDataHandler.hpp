#pragma once

#include <Geode/Geode.hpp>

struct SuData {
    static cocos2d::CCNode* creator_buttons_menu;

    static std::vector<cocos2d::CCNode*> buttonlist;

    static void handle();
};
