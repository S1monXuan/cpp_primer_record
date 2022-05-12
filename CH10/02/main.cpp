#include <iostream>
#include "person.h"

int main(){
    using namespace std;
    Person one;
    Person two("Smytheraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;


    cout << "=====================" << endl;
    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;
    
    
    cout << "=====================" << endl;
    three.Show();
    cout << endl;
    three.FormalShow();
    return 0;
}