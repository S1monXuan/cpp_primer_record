#include <iostream>

int main(){
    using namespace std;
    float daphine = 100, cleo = 100;
    int year = 1;
    while(cleo <= daphine){
        daphine += 100 * 0.1;
        cleo *= 1.05;
        year++;
    }
    cout << "year: " << year  << " daphine: " << daphine << " cleo: " << cleo << endl;
    return 0; 
}