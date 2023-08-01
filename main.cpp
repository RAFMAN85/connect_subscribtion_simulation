#include <iostream>
#include <set>
#include "data.h"
#include "client.h"


int main() {

    //register client
    Client client1("123", 1);
    Client client2("123", 2);
    Client client3("33333333", 3);

    std::set<Client> clientSet;
    clientSet.insert(client1);
    clientSet.insert(client2);
    clientSet.insert(client3);

    for(auto it = clientSet.begin(); it != clientSet.end(); ++it){
        it->checkLicense();
    }

    Device device1(Status::CONNECTED, Stat::NORMAL, Type::USB);
    Device device2(Status::DISCONNECTED, Stat::NORMAL, Type::MOUSE);

    client1.makeLog(device1.CreateNotify());
    client1.makeLog(device2.CreateNotify());
    device2.SetType(Type::KEYBOARD);
    client1.makeLog(device2.CreateNotify());

    client2.makeLog(device2.CreateNotify());
    device2.SetStatus(Status::DISCONNECTED);
    device2.SetStat(Stat::ERROR);
    client2.makeLog(device2.CreateNotify());

    std::queue<std::string> myQ1 = client1.getQueue();
    std::queue<std::string> myQ2 = client2.getQueue();

    std::cout<<"__client1"<<std::endl;
    while(!myQ1.empty()){
        std::cout<<myQ1.front()<<std::endl;
        myQ1.pop();
    }

    std::cout<<"__client2"<<std::endl;
    while(!myQ2.empty()){
        std::cout<<myQ2.front()<<std::endl;
        myQ2.pop();
    }


    return 0;
}
