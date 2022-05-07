#include <iostream>

int main(){
    using namespace std;
    int lower, larger;
    int sum;
    cout << "input lower number:\n";
    cin >> lower;
    cout << "input lower number:\n";
    cin >> larger;
    for(int i = lower; i < larger + 1; i++){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}