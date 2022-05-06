#include <iostream>
const int factor = 12;

int main(){
    using namespace std;
    //Q1
    int height_inches;
    cin >> height_inches;
    int height_feet = height_inches / factor;
    height_inches = height_inches % factor;
    cout << "you height is " << height_feet << " feet and "<< height_inches << " inches" << endl;
    return 0;
}