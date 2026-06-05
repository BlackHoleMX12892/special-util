#include "headers/SuDataHandler.hpp"

#include <Geode/Geode.hpp>

cocos2d::CCNode* SuData::creator_buttons_menu {nullptr};

std::vector<cocos2d::CCNode*> SuData::buttonlist {nullptr};

void SuData::handle() {
    SuData::buttonlist = {
        SuData::creator_buttons_menu->getChildByID("featured-button"),
        SuData::creator_buttons_menu->getChildByID("lists-button"),
        SuData::creator_buttons_menu->getChildByID("paths-button"),
        SuData::creator_buttons_menu->getChildByID("map-packs-button"),
        SuData::creator_buttons_menu->getChildByID("search-button"),
        SuData::creator_buttons_menu->getChildByID("map-button"),
        SuData::creator_buttons_menu->getChildByID("daily-button"),
        SuData::creator_buttons_menu->getChildByID("weekly-button"),
        SuData::creator_buttons_menu->getChildByID("event-button"),
        SuData::creator_buttons_menu->getChildByID("gauntlets-button"),
        SuData::creator_buttons_menu->getChildByID("create-button"),
        SuData::creator_buttons_menu->getChildByID("saved-button"),
        SuData::creator_buttons_menu->getChildByID("scores-button"),
        SuData::creator_buttons_menu->getChildByID("quests-button"),
        SuData::creator_buttons_menu->getChildByID("versus-button")
    };
//    geode::log::debug("Here you have it, hope it works {}", SuData::buttonlist[2]);
}
