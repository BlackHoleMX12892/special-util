#pragma once

#include <Geode/Geode.hpp>

class SuPopup : public geode::Popup {
protected:
    // Declare temporal layouts, eevntually would add user customization.

    void layout1(CCObject* sender);
    void layout2(CCObject* sender);
    void layout3(CCObject* sender);
    void layout4(CCObject* sender);

    // declare init
    void apply(CCObject* sender);
    bool init();

public:
    static SuPopup* create() {
        // create instance of popup
        auto ret = new SuPopup();
        // check if init
        if (ret->init()) {
            ret->autorelease();
            //return the instance
            return ret;
        } else {
            // if fails delete the instance and return null
            delete ret;
            return nullptr;
        }
    }
};
