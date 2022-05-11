#include <iostream>
#include "chaff.h"

// char buf[1024];

int main(){
    using namespace std;
    chaff * ptr;
    ptr = new chaff[2];
    setChaff(*ptr, "test", 10);
    setChaff(*(ptr+1), "test2", 15);
    for(int i = 0; i < 2; i++){
        cout << (ptr + i) -> dross << " || " << (ptr + i) -> slag << endl; 
    }
    return 0;
}