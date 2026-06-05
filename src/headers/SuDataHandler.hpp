#pragma once

#include <Geode/Geode.hpp>

struct SuData {
    cocos2d::CCNode* creator_buttons_menu {nullptr};

    static std::vector<cocos2d::CCNode*> buttonlist;

    void handle();
};
