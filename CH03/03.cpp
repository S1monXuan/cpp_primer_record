#include <iostream>

int main(){
    using namespace std;
    int degrees, arcs, seconds;
    cout << "Enter the degrees:" << ends;
    cin >> degrees;
    cout << "Enter the arcs:" << ends;
    cin >> arcs;
    cout << "Enter the seconds:" << ends;
    cin >> seconds;
    cout << degrees << "degrees, " << arcs << "arcs, " << seconds << "seconds, " << " = " << float(degrees + float(arcs)/60 + float(seconds)/3600);
    return 0;
}