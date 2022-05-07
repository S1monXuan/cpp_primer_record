#include <iostream>

int main(){
    using namespace std;
    int rows;
    cout << "Enter number of rows: \n";
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i - 1; j++){
            cout << ".";
        }
        for(int z = 0; z <= i ; z++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}