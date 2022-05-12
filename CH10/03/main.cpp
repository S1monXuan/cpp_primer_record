#include "golf.h"
#include <iostream>


using namespace std;

int main(){
    
    golf ann;
    ann.setgolf("Ann Birdfree", 24);
    ann.showgolf();
    ann.handicap(20);
    ann.showgolf();

    golf andy;
    int i = andy.setgolf();
    cout << i << endl;
    andy.showgolf();
    return 0;
}

//run code 
// g++ gole.cpp main.cpp -o test