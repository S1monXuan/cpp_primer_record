#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    const int ChAize = 20;
    char first_name[ChAize];
    char last_name[ChAize];

    cout << "Enter your first name:";
    cin >> first_name;
    cout << "Enter your first name:";
    cin >> last_name;
    strcat(first_name, ", ");
    strcat(first_name, last_name);
    cout << "Here is the infor in a single string: " << first_name << endl;
    return 0;
}