//
// Created by Raffaele Montella on 06/09/2018.
//

#ifndef SIGNALK_SERVER_CPP_WEBSOCKETCLIENTDATAPROVIDER_HPP
#define SIGNALK_SERVER_CPP_WEBSOCKETCLIENTDATAPROVIDER_HPP


#include <uWS/Hub.h>
#include "DataProvider.hpp"
#include "SignalKDataProvider.hpp"

class WebSocketClientDataProvider : public SignalKDataProvider {
public:
    virtual void run();
    WebSocketClientDataProvider(std::string id, SignalK::SignalKModel *document, int perms, std::string url);
    WebSocketClientDataProvider(std::string id, SignalK::SignalKModel *document, nlohmann::json options);
    virtual ~WebSocketClientDataProvider();

private:
    uWS::Hub h;
    std::string url;
};


#endif //SIGNALK_SERVER_CPP_WEBSOCKETCLIENTDATAPROVIDER_HPP
