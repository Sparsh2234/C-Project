// Driver Class

#include "BrowserHistory.h"
#include "WebsiteData.h"

#include <iostream>
#include <string>
using namespace std;

int main() {

    std::string line;
    BrowserHistory h;
    bool error;

    while (true) {

        if (cin.eof()) {
            break;
        }

        getline(cin, line);

        if (line == "exit") {
            break;
        }

        int pos = line.find(" ");
        std::string cmd = line.substr(0, pos);
        std::string obj = line.substr(pos + 1);


        if (cmd == "push_back") {
            pos = obj.find("\"");
            obj = obj.substr(pos+1);
            pos = obj.find("\"");
            string urlName = obj.substr(0,pos);
            obj = obj.substr(pos+1);
            pos = obj.find("\"");
            obj = obj.substr(pos+1);
            pos = obj.find("\"");
            string url = string(obj.substr(0,pos));
            h.push_back(urlName, url);
            cout << "success"<<endl;
        }

        if (cmd == "pop_front") {
            error = h.pop_front();
            if (error) {
                cout << "success"<<endl;
            } else {
                cout <<"failure"<<endl;
            }
        }

        if (cmd == "pop_back") {
            error = h.pop_back();
            if (error) {
                cout << "success"<<endl;
            } else {
                cout <<"failure"<<endl;
            }
        }

        if (cmd == "push_front") {
            pos = obj.find("\"");
            obj = obj.substr(pos+1);
            pos = obj.find("\"");
            string urlName = obj.substr(0,pos);
            obj = obj.substr(pos+1);
            pos = obj.find("\"");
            obj = obj.substr(pos+1);
            pos = obj.find("\"");
            string url = string(obj.substr(0,pos));
            h.push_front(urlName, url);
            cout << "success"<<endl;
        }

        if (cmd == "size") {
            int size = h.size();
            cout<< "size is ";
            cout<<size<<endl;
        }

        if (cmd == "front") {
            WebsiteData * front = h.front();
            if (front != NULL) {
                cout<< "front is " + front->name + " " + front->url<<endl;
            } else {
                cout<<"failure"<<endl;
            }

        }

        if (cmd == "back") {
            WebsiteData * back = h.back();
            if (back != NULL) {
                cout<< "back is " + back->name + " " + back->url<<endl;
            } else {
                cout<<"failure"<<endl;
            }
        }

        if (cmd == "empty") {
            cout<<h.empty()<<endl;
        }

        if (cmd == "clear") {
            h.clear();
            cout<<"success"<<endl;
        }

        if (cmd == "find") {
            pos = obj.find("\"");
            obj = obj.substr(pos+1);
            pos = obj.find("\"");
            string urlName = obj.substr(0,pos);
            WebsiteData * data = h.find(urlName);
            if (data != NULL) {
                cout << "found " + data->name + " " + data->url<<endl;
            } else {
                cout <<"not found " + urlName<<endl;
            }
        }

        if (cmd == "print") {
            h.print();
        }

    }

    return 0;

}
