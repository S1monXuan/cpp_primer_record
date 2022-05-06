#include <iostream>

int main(){
    using namespace std;
    const int degrees = 60;
    int seconds;
    int days, hours, minutes;
    cout << "Enter the seconds number:" << ends;
    cin >> seconds;

    minutes = seconds / degrees;
    seconds = seconds % degrees;
    hours = minutes / degrees;
    minutes = minutes % degrees;
    days = hours / 24;
    hours = hours % 24;
    cout << days << ", " << hours << ", " << minutes << ", " << seconds << endl;
    return 0;
}