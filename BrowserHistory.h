//
// Created by Sparsh on 2/5/2021.
// Dequeue Class

#ifndef PROJECT1_BROWSERHISTORY_H
#define PROJECT1_BROWSERHISTORY_H

#include "WebsiteData.h"
#include "WebsiteList.h"

#include <iostream>
#include <string>
using namespace std;

class BrowserHistory: public WebsiteList{

public:

    bool push_front(string urlName, string url);
    bool push_back(string urlName, string url);
    bool pop_front();
    bool pop_back();
    int size();
    WebsiteData * front();
    WebsiteData * back();
    string empty();
    void clear();
    WebsiteData * find(string urlName);
    void print();


};


#endif //PROJECT1_BROWSERHISTORY_H
