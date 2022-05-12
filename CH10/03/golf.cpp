#include "golf.h"
#include <iostream>
#include <cstring>


using namespace std;

void golf::setgolf(const char* name,int hc){
    strcpy(this->fullname, name);
    this->handi = hc;
}

int golf::setgolf(){
    cout << "Enter Name:";
    if(cin.getline(fullname, Len) && fullname[0] != '\0'){
        cout << "Enter handicap:";
        cin >> handi;
        cin.get();
        return 1;
    }
    return 0;
}

void golf::handicap(int hc){
    this->handi = hc;
}

void golf::showgolf() const{
    cout << "Name: " << fullname << endl;
    cout << "Handicap: " << handi << endl;
}