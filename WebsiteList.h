//
// Created by Sparsh on 2/5/2021.
// Linked List Class

#ifndef PROJECT1_WEBSITELIST_H
#define PROJECT1_WEBSITELIST_H

#include "WebsiteData.h"

#include <iostream>
#include <string>
using namespace std;

class WebsiteList {

private:
    WebsiteData *head, *tail, *current;

public:
    WebsiteList();

    void setNext(string name, string url);
    void addToTop(string name, string url);
    void deleteFirstElement();
    void deleteLastElement();
    void deleteAll();
    WebsiteData * findData(string urlName);
    void printBackwards();

    WebsiteData * getHead();
    WebsiteData * getTail();
    WebsiteData * getPrev();
};

#endif //PROJECT1_WEBSITELIST_H
