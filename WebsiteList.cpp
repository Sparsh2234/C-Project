//
// Created by Sparsh on 2/5/2021.
// Linked List Class

#include "WebsiteList.h"
#include "BrowserHistory.h"

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


WebsiteList::WebsiteList() {
    tail = NULL;
    head = NULL;
    current = NULL;
    //prev = NULL;
}

void WebsiteList::setNext(string name, string url) {

    WebsiteData * data = new WebsiteData;
    data->setDataValues(name, url);

    if (this->head == NULL) {
        head = data;
        data->previous = NULL;
        current = head;
        tail = head;
    } else {
        current->next = data;
        data->previous = current;
        //prev = current;
        current = current->next;
        tail = current;
    }
}

void WebsiteList::addToTop(string name, string url) {

    WebsiteData * data = new WebsiteData;
    data->setDataValues(name, url);

    if (this->head == NULL) {
        head = data;
        data->previous = NULL;
        current = head;
        tail = head;
    } else {
        WebsiteData * temp = head;
        head = data;
        head->previous = NULL;
        head->next = temp;
        temp->previous = head;
    }


}

WebsiteData * WebsiteList::findData(string urlName) {
    BrowserHistory list = BrowserHistory();

    WebsiteData * temp = head;
    for (int i = 0; i < list.size(); i++) {
        string name = temp->name;
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        if (name == urlName) {
            return temp;
        }
        temp = temp->next;
    }

    return NULL;
}

WebsiteData * WebsiteList::getHead() {
    return head;
}

WebsiteData * WebsiteList::getTail() {
    return tail;
}

void WebsiteList::deleteFirstElement() {
    WebsiteData * temp;

    if (head->next != NULL) {
        temp = head->next;
        head = NULL;
        head = temp;
    }
}

void WebsiteList::deleteLastElement() {
    WebsiteData * temp;

    if (tail->previous != NULL) {
        temp = tail->previous;
        tail = NULL;
        tail = temp;
    } else {
        if (tail != NULL) {
            tail = NULL;
            head = NULL;
        }
    }
}

void WebsiteList::deleteAll() {

    BrowserHistory list = BrowserHistory();
    for (int i = 0; i < list.size(); i++) {
        deleteLastElement();
    }

}

void WebsiteList::printBackwards() {
    BrowserHistory list = BrowserHistory();
    WebsiteData * temp = tail;
    for (int i = 0; i < list.size(); i++) {
        cout<<temp->name + " " + temp->url<<endl;
        temp = temp->previous;
    }
}
