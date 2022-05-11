#include "golf.h"
#include <iostream>


using namespace std;

int main(){
    
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    handicap(ann, 20);
    showgolf(ann);

    golf andy;
    int i = setgolf(andy);
    cout << i << endl;
    showgolf(andy);
    return 0;
}

//run code 
// g++ gole.cpp main.cpp -o test