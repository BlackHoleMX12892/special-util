#pragma once

#include <Geode/Geode.hpp>

struct SuData {
    cocos2d::CCNode* creator_buttons_menu {nullptr};

    std::vector<cocos2d::CCNode*> buttonlist {nullptr};

    void getStorage();
    
    void saveToStorage(std::vector<std::string> order);

    void render();
};
