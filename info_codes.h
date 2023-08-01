#ifndef CONNECT_SUBSCRIBTION_SIMULATION_INFO_CODES_H
#define CONNECT_SUBSCRIBTION_SIMULATION_INFO_CODES_H
#include <string>
#include <map>

#define StatusCode 1
#define StatCode 2
#define TimeCode 3
#define TypeCode 4

enum class Status {
    CONNECTED,
    DISCONNECTED,
    UNDEFINED
};

enum class Stat {
    NORMAL,
    ERROR
};

enum class Type {
    USB,
    KEYBOARD,
    MOUSE,
    SCREEN
};

extern std::map<Status, std::string> StatusMap;
extern std::map<Stat, std::string> StatMap;
extern std::map<Type, std::string> TypeMap;

#endif //CONNECT_SUBSCRIBTION_SIMULATION_INFO_CODES_H
