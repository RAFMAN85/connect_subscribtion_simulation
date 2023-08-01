#include "data.h"

//int could be used in other cases so let it be int but not enum

int Device::GetStatus() {
    return (int)m_status;
}

int Device::GetStat() {
    return (int)m_stat;
}

void Device::GetTime() {
    auto currentTime = std::chrono::system_clock::now();
    std::time_t currentTime_t = std::chrono::system_clock::to_time_t(currentTime);
    std::tm* localTime = std::localtime(&currentTime_t);
    std::ostringstream oss;
    oss<<std::put_time(localTime, "%H:%M:%S");
    m_time = oss.str();
}

int Device::GetType() {
    return (int)m_type;
}

template<class code_t>
std::string Device::GetInfo(code_t code) {
    switch (code) {
        case StatusCode:
            return StatusMap[m_status];
        case StatCode:
            return StatMap[m_stat];
        case TypeCode:
            return TypeMap[m_type];
        default:
            return "UNKNOWN";
    }
}

std::string Device::CreateNotify() {
    if(GetInfo(StatCode) == "NORMAL") {
        return GetInfo(TypeCode) + " " + GetInfo(StatusCode) + " " + GetInfo(StatCode) + " at " + m_time;
    } else {
        return GetInfo(TypeCode) + " " + GetInfo(StatCode) + " at " + m_time;
    }
}

void Device::SetStatus(Status status) {
    m_status = status;
}

void Device::SetStat(Stat stat) {
    m_stat = stat;
}

void Device::SetType(Type type) {
    m_type = type;
}
