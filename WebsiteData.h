//
// Created by Sparsh on 2/5/2021.
// Node Class

#ifndef PROJECT1_WEBSITEDATA_H
#define PROJECT1_WEBSITEDATA_H


#include <iostream>
#include <string>
using namespace std;

class WebsiteData {

public:
     string name;
     string url;
     class WebsiteData * next;
     class WebsiteData * previous;

     void setDataValues(string name, string url);
};


#endif //PROJECT1_WEBSITEDATA_H
