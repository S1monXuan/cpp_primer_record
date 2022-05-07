#include <iostream>
#include <string>

int main(){
    using namespace std;

    string months[12] = {"Jan", "Feb", "Mar", "Apr", 
                         "May", "Jun", "Jul", "Aug", 
                         "Sep", "Oct", "Nov", "Dec"};

    int sell[12];
    int total = 0;
    for(int i = 0; i < 12; i++){
        cout << "Enter the number for " << months[i] << endl;
        cin >> sell[i];

        total += sell[i];
    }

    cout << "The total is: " << total << endl;
    for(int i = 0; i < 12; i++){
        cout << months[i] << " : " << sell[i] << endl;
    }
    
    return 0;
}