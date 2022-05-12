#include <iostream>
#include "move.h"
using namespace std;

Move::Move(double a, double b){
    x = a;
    y = b;
}
void Move::showmove() const{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

Move Move::add(const Move& m) const{
    Move res;
    res.x += m.x;
    res.y += m.y;
    return res;
}

void Move::reset(double a, double b){
    x = 0;
    y = 0;
}