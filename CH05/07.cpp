#include <iostream>
#include <string>

struct Car{
    std::string name;
    int year;
};

int main(){
    using namespace std;
    int num = 0;
    cout << "Enter the car number:\n";
    cin >> num;
    Car * pt = new Car[num];

    for(int i = 0; i < num; i++){
        cout << "Please enter the company\n";
        cin >> (pt+i) -> name;

        cout << "Please enter the build year\n";
        cin >> (pt+i) -> year;
    }
    
    for(int i = 0; i < num; i++){
        cout << "Car" << i + 1 << ": "
            << pt[i].name << ", " << pt[i].year << endl;  
    }

    return 0;
}