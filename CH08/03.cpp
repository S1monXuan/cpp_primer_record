#include <iostream>
#include <cstring>

using namespace std;

void upper(string & pt);

int main(){
    string s = "a";
    upper(s);
    return 0;
}

void upper(string & pt){
    while(1){
        std::cout << "Enter a string (q to quit): \n";
        getline(cin, pt);
        if(pt == "q"){
            break;
        }
        int len = pt.length();
        for(int i = 0; i < len; i++){
            pt[i] = toupper(pt[i]);
        }
        std::cout << pt << endl;
    }
    std::cout << "bye" << endl;
}