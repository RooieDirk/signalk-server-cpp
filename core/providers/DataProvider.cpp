//
// Created by Raffaele Montella on 31/08/2018.
//


#include "DataProvider.hpp"



DataProvider::DataProvider() : t() {
    std::cout << "DataProvider::DataProvider()\n";
}

DataProvider::DataProvider(std::string id,SignalK::SignalKModel *document) {
    this->id=id;
    this->document=document;
    std::cout << "DataProvider::DataProvider()\n";
}

DataProvider::DataProvider(std::string id,SignalK::SignalKModel *document, nlohmann::json options) {

}

DataProvider::~DataProvider() {
    std::cout << "DataProvider::~DataProvider()\n";
}

void DataProvider::start() {
    t = std::thread(&DataProvider::run, this);
}

void DataProvider::join() {
    t.join();
}

void DataProvider::run(){
}





