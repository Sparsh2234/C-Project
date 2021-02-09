//
// Created by Sparsh on 2/5/2021.
// Dequeue Class

#include "BrowserHistory.h"
#include "WebsiteList.h"
#include "WebsiteData.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int listSize = 0;

bool BrowserHistory::pop_front() {

    if (listSize == 0) {
        return false;
    } else {
        deleteFirstElement();
        listSize--;
        cout<<listSize<<endl;
        return true;
    }

}


bool BrowserHistory::push_back(string urlName, string url) {
    setNext(urlName, url);
    listSize++;
    return true;
}

bool BrowserHistory::pop_back() {

    if (listSize != 0) {
        deleteLastElement();
        listSize--;
        return true;
    } else {
        return false;
    }
}

bool BrowserHistory::push_front(string urlName, string url) {
    addToTop(urlName, url);
    listSize++;
    return true;
}

int BrowserHistory::size() {
    return listSize;
}

WebsiteData * BrowserHistory::front() {

    if (listSize > 0) {
        return getHead();
    } else {
        return NULL;
    }

}

WebsiteData * BrowserHistory::back() {

    if (listSize > 0) {
        return getTail();
    } else {
        return NULL;
    }

}

string BrowserHistory::empty() {

    if (listSize == 0) {
        return "empty 1";
    } else {
        return "empty 0";
    }

}

void BrowserHistory::clear() {
    deleteAll();
    listSize = 0;
}

WebsiteData * BrowserHistory::find(string urlName) {
    transform(urlName.begin(), urlName.end(), urlName.begin(), ::tolower);
    return findData(urlName);
}

void BrowserHistory::print() {
    printBackwards();
}