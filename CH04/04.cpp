#include <iostream>
#include <string>

int main(){
    using namespace std;
    string first_name;
    string last_name;
    string final_name;

    cout << "Enter your first name:\n";
    getline(cin, first_name);
    cout << "Enter your first name:\n";
    getline(cin, last_name);
    final_name = first_name + ", " + last_name;
    cout << "Here is the infor in a single string: " << final_name << endl;
    return 0;
}