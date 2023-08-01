#include "info_codes.h"

std::map<Status, std::string> StatusMap = {
        {Status::CONNECTED, "CONNECTED"},
        {Status::DISCONNECTED, "DISCONNECTED"},
        {Status::UNDEFINED, "UNDEFINED"}
};

std::map<Stat, std::string> StatMap = {
        {Stat::NORMAL, "NORMAL"},
        {Stat::ERROR, "ERROR"}
};

std::map<Type, std::string> TypeMap = {
        {Type::USB, "USB"},
        {Type::KEYBOARD, "KEYBOARD"},
        {Type::MOUSE, "MOUSE"},
        {Type::SCREEN, "SCREEN"}
};