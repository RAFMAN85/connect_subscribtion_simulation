#include <iostream>
#include "client.h"

void Client::makeLog(std::string oneMessage) {
    clientNotificationLog.push(oneMessage);
}

bool Client::isLicenceValid() const{
    if(licence == "123"){
        return true;
    } else {
        return false;
    }
}

bool Client::operator<(const Client& other) const{
    return client_id<other.client_id;
};
bool Client::operator==(const Client& other) const{
    return client_id==other.client_id;
}

int Client::getId() {
    return client_id;
}

void Client::checkLicense() const {
    if(!isLicenceValid()){
        std::cout<<"!!!Invalid Licence for client "<<client_id<<std::endl;
    }
}

std::queue<std::string> Client::getQueue() {
    return clientNotificationLog;
}
