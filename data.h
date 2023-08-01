#ifndef CONNECT_SUBSCRIBTION_SIMULATION_DATA_H
#define CONNECT_SUBSCRIBTION_SIMULATION_DATA_H
#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <utility>
#include "info_codes.h"

class Device {
    public:

        Device(const Device&) = delete;
        Device& operator=(const Device&) = delete;

        Device(Status status, Stat stat, Type type) : m_status(status), m_stat(stat), m_type(type){
            GetTime();
        };
        ~Device() = default;

        int GetStatus();
        int GetStat();
        int GetType();

        void SetStatus(Status status);
        void SetStat(Stat stat);
        void SetType(Type type);

        void GetTime();
        template<class code_t> std::string GetInfo(code_t code);
        std::string CreateNotify();


    private:
        mutable Type m_type;
        Status m_status;
        Stat m_stat;
        std::string m_time;
        std::string notification;
};



#endif //CONNECT_SUBSCRIBTION_SIMULATION_DATA_H
