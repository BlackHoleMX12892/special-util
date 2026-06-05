#include "headers/SuDataHandler.hpp"

#include <Geode/Geode.hpp>

using namespace geode::prelude;

void SuData::getStorage() {
    SuData::buttonlist = {
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("11")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("12")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("13")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("14")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("15")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("6")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("7")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("8")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("9")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("10")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("1")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("2")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("3")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("4")),
        SuData::creator_buttons_menu->getChildByID(Mod::get()->getSavedValue<std::string>("5"))
    };
    // geode::log::debug("Here you have it, hope it works {}", SuData::buttonlist[2]);
}

void SuData::saveToStorage(std::vector<std::string> order) {
    Mod::get()->setSavedValue<std::string>("1", order[0]);
    Mod::get()->setSavedValue<std::string>("2", order[1]);
    Mod::get()->setSavedValue<std::string>("3", order[2]);
    Mod::get()->setSavedValue<std::string>("4", order[3]);
    Mod::get()->setSavedValue<std::string>("5", order[4]);
    Mod::get()->setSavedValue<std::string>("6", order[5]);
    Mod::get()->setSavedValue<std::string>("7", order[6]);
    Mod::get()->setSavedValue<std::string>("8", order[7]);
    Mod::get()->setSavedValue<std::string>("9", order[8]);
    Mod::get()->setSavedValue<std::string>("10", order[9]);
    Mod::get()->setSavedValue<std::string>("11", order[10]);
    Mod::get()->setSavedValue<std::string>("12", order[11]);
    Mod::get()->setSavedValue<std::string>("13", order[12]);
    Mod::get()->setSavedValue<std::string>("14", order[13]);
    Mod::get()->setSavedValue<std::string>("15", order[14]);
}
