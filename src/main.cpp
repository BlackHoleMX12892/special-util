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
            creator_buttons_menu->setLayout(nullptr);


            SuData su_data;
            su_data.creator_buttons_menu = creator_buttons_menu;
            //auto isStorageValid = su_data.getStorage();
            su_data.getStorage();

            std::vector<cocos2d::CCPoint> ordered_children {
                creator_buttons_menu->getChildByIndex(0)->getPosition(),
                creator_buttons_menu->getChildByIndex(1)->getPosition(),
                creator_buttons_menu->getChildByIndex(2)->getPosition(),
                creator_buttons_menu->getChildByIndex(3)->getPosition(),
                creator_buttons_menu->getChildByIndex(4)->getPosition(),
                creator_buttons_menu->getChildByIndex(5)->getPosition(),
                creator_buttons_menu->getChildByIndex(6)->getPosition(),
                creator_buttons_menu->getChildByIndex(7)->getPosition(),
                creator_buttons_menu->getChildByIndex(8)->getPosition(),
                creator_buttons_menu->getChildByIndex(9)->getPosition(),
                creator_buttons_menu->getChildByIndex(10)->getPosition(),
                creator_buttons_menu->getChildByIndex(11)->getPosition(),
                creator_buttons_menu->getChildByIndex(12)->getPosition(),
                creator_buttons_menu->getChildByIndex(13)->getPosition(),
                creator_buttons_menu->getChildByIndex(14)->getPosition()
            };

            //if (isStorageValid == true) {
                for (size_t i = 0; i < su_data.buttonlist.size(); i++) {
                    if (su_data.buttonlist[i] == nullptr)
                    {
                        continue;
                    }

                    su_data.buttonlist[i]->setPosition(ordered_children[i]);

                    /*su_data.buttonlist[i]->retain();
                    su_data.buttonlist[i]->removeFromParent();
                    creator_buttons_menu->addChild(su_data.buttonlist[i]);
                    su_data.buttonlist[i]->release();*/
                    // log::debug("Adding: {}", su_data.buttonlist[i]);
                }

                creator_buttons_menu->updateLayout();
            //} else {
                //log::debug("invalid storage");
            //}

            return true;
        }
    }
};
