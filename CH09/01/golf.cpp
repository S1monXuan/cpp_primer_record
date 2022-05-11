#include "golf.h"
#include <iostream>
#include <cstring>


using namespace std;

void setgolf(golf& g,const char* name,int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g){
    cout << "Enter Name:";
    if(cin.getline(g.fullname, Len) && g.fullname[0] != '\0'){
        cout << "Enter handicap:";
        cin >> g.handicap;
        cin.get();
        return 1;
    }
    return 0;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    cout << "Name: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}