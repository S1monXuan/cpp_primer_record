#include <iostream>
#include <array>

int main(){
    using namespace std;

    array<double, 3> res;
    cout << "Enter result\n";
    cin >> res[0];
    cin >> res[1];
    cin >> res[2];
    
    double avg = (res[0] + res[1] + res[2]) / 3;
    cout << res[0] << ", " << res[1] << ", "  << res[2] << ", " << avg << endl;
    return 0;
}