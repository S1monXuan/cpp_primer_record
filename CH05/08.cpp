#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char input[40];
    int count = 0;
    cout << "Enter words(done to stop):\n";
    cin.getline(input, 40);
    // cin >> input;
    while(strcmp(input, "done") != 0){
        count++;
        cin.getline(input, 40);
        // cin >> input;
    }
    cout << "The total number is " << count << endl;
    return 0;
}