//rewrite 4.4
#include <iostream>
#include <string>
int main(){
    using namespace std;
    const int ArSize = 20;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favo dessert:\n";
    getline(cin, dessert);
    cout << "I have some " << dessert;
    cout << " for you, " << name << endl;
    return 0;


}