#include <iostream>

int main(){
    using namespace std;
    int temp, res;
    temp = 1;
    while(temp != 0){
        cout << "Input number (0 fr quit) \n";
        cin >> temp;
        res += temp;
        cout << "Sum: " << res << endl; 
    }
    return 0;
}