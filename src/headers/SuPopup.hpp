#pragma once

#include <Geode/Geode.hpp>

class SuPopup : public geode::Popup {
protected:
    // declare init
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
