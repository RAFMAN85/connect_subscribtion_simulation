#ifndef CONNECT_SUBSCRIBTION_SIMULATION_CLIENT_H
#define CONNECT_SUBSCRIBTION_SIMULATION_CLIENT_H
#include <string>
#include <queue>
#include <utility>
#include "data.h"
#include "info_codes.h"


class Client{
    public:

        explicit Client(std::string licence, int id) : licence(std::move(licence)), client_id(id){};
        explicit Client(int id) : client_id(id){};
        ~Client() = default;
        void makeLog(std::string);
        bool isLicenceValid() const;
        int getId();
        std::queue<std::string> getQueue();
        void checkLicense() const;

        bool operator<(const Client& other) const;
        bool operator==(const Client& other) const;

    private:
        int client_id;
        std::string licence;
        std::queue<std::string> clientNotificationLog;
};


#endif //CONNECT_SUBSCRIBTION_SIMULATION_CLIENT_H
