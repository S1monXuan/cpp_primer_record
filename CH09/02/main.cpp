//compile g++ strcount.cpp main.cpp -o test
#include <iostream>
#include "strcount.h"
#include <string>

int main(){
    using namespace std;
    
    string input;
    do{
        cout << "Enter next line (Empty to quit): \n";
        getline(cin, input);
        if(input == ""){
            break;
        }
        strcount(input);
        // cin.get(next);
        // while(next != '\n'){
        //     cin.get(next);
        // }
        // strcount(input);
        // cout << "Enter next line (Empty to quit): \n";
        // cin.get(input, ArSize);
    }while(input != "");
    cout << "Bye\n";
    return 0;
}