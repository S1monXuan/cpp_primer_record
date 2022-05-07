#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    const int var = 15;
    char firstName[var];
    char lastName[var];
    char letterGrade;
    int age;
    cout << "Your first name\n";
    cin.get(firstName, var).get();
    cout << "Your last name\n";
    cin.get(lastName, var).get();
    cout << "Your letter grade\n";
    cin >> letterGrade;
    cout << "Age:\n";
    cin >> age;
    cout << "Name: " << firstName << ", " << lastName << endl;
    cout << "Grade:" << letterGrade << endl;
    cout << "Age:" << age << endl;
    return 0;
}