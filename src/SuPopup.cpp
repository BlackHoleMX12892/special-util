#include <Geode/Geode.hpp>
#include "headers/SuPopup.hpp"
#include "headers/SuDataHandler.hpp"

using namespace geode::prelude;

std::vector<std::string> items;

void SuPopup::layout1(CCObject* sender) {
    items = {"search-button", "saved-button", "scores-button", "create-button", "quests-button", "versus-button", "map-button", "event-button", "weekly-button", "daily-button", "gauntlets-button", "lists-button", "paths-button", "map-packs-button", "featured-button"};
}

void SuPopup::layout2(CCObject* sender) {
    items = {"search-button", "saved-button", "create-button", "scores-button", "quests-button", "versus-button", "map-button", "event-button", "weekly-button", "daily-button", "gauntlets-button", "lists-button", "paths-button", "map-packs-button", "featured-button"};
}

void SuPopup::layout3(CCObject* sender) {
    items = {"search-button", "saved-button", "paths-button", "map-packs-button", "featured-button", "create-button", "scores-button", "quests-button", "versus-button", "map-button", "event-button", "weekly-button", "daily-button", "gauntlets-button", "lists-button",};
}

void SuPopup::layout4(CCObject* sender) {
    items = {"search-button", "saved-button", "create-button", "scores-button", "quests-button", "versus-button", "daily-button", "gauntlets-button", "lists-button", "paths-button", "map-packs-button", "featured-button", "map-button", "event-button", "weekly-button"};
}

void SuPopup::apply(CCObject* sender) {
    SuData su_data;
    su_data.saveToStorage(items);
    // log::debug("data saved", items);
}

bool SuPopup::init() {
    if (!Popup::init(280.f, 200.f)) {
        return false;
    } else {
        items.clear();

        auto su_popup_menu = CCMenu::create();
        su_popup_menu->setLayout(RowLayout::create());

        auto l1_btn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("l1"), this, menu_selector(SuPopup::layout1)
        );

        auto l2_btn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("l2"), this, menu_selector(SuPopup::layout2)
        );

        auto l3_btn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("l3"), this, menu_selector(SuPopup::layout3)
        );

        auto l4_btn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("l4"), this, menu_selector(SuPopup::layout4)
        );

        su_popup_menu->addChild(l1_btn);
        su_popup_menu->addChild(l2_btn);
        su_popup_menu->addChild(l3_btn);
        su_popup_menu->addChild(l4_btn);
        su_popup_menu->updateLayout();

        m_mainLayer->addChildAtPosition(su_popup_menu, Anchor::Center);

        auto apply_btn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("Apply"), this, menu_selector(SuPopup::apply)
        );

        m_buttonMenu->addChild(apply_btn);
        apply_btn->setPosition({ m_buttonMenu->getContentWidth() / 2,  30});
        m_buttonMenu->updateLayout();

        this->setTitle("Customize menu");

        return true;
    }
}
