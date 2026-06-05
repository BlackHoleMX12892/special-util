#include <Geode/Geode.hpp>
#include <Geode/modify/CreatorLayer.hpp>
#include "headers/SuPopup.hpp"
#include "headers/SuDataHandler.hpp"

using namespace geode::prelude;

struct SuCreatorLayer : Modify<SuCreatorLayer, CreatorLayer> {
    void su_button_onclick(CCObject* sender) {
        auto su_popup_instance = SuPopup::create();
        su_popup_instance->show();
    }

    bool init() {
        if (!CreatorLayer::init())
        {
            return false;
        }
        else
        {
            auto su_menu = this->getChildByID("bottom-left-menu");
            auto su_button = CCMenuItemSpriteExtra::create(
                CircleButtonSprite::createWithSpriteFrameName("GJ_hammerIcon_001.png"), this, menu_selector(SuCreatorLayer::su_button_onclick)
            );

            su_menu->addChild(su_button);
            su_menu->updateLayout();

            auto creator_buttons_menu = this->getChildByID("creator-buttons-menu");


            SuData su_data;
            su_data.creator_buttons_menu = creator_buttons_menu;
            su_data.getStorage();


            for (size_t i = 0; i < su_data.buttonlist.size(); i++)
            {
                su_data.buttonlist[i]->retain();
                su_data.buttonlist[i]->removeFromParent();
                creator_buttons_menu->addChild(su_data.buttonlist[i]);
                su_data.buttonlist[i]->release();
                // log::debug("Adding: {}", su_data.buttonlist[i]);
            }

            creator_buttons_menu->updateLayout();

            return true;
        }
    }
};
