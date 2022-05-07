#include <iostream>
#include <cstring>
#include <string>

int main(){
    using namespace std;
    int count = 0;
    string input;
    cout << "Enter words(done to stop):\n";
    cin >> input;
    while(input != "done"){
        count++;
        cin >> input;
    }
    cout << "The total number is " << count << endl;
    return 0;    
}