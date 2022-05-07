#include <iostream>
#include <string>

int main(){
    using namespace std;

    string months[12] = {"Jan", "Feb", "Mar", "Apr", 
                         "May", "Jun", "Jul", "Aug", 
                         "Sep", "Oct", "Nov", "Dec"};

    int sell[3][12];
    int total[3] = {0, 0, 0};
    int to = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 12; j++){
            cout << "Enter the number for " << months[j] << endl;
            cin >> sell[i][j];
            //sell[i][j] = 1;
            total[i] += sell[i][j];
            to += sell[i][j];
        }
    }

    cout << "The total is: " << to << endl;
    for(int i = 0; i < 3; i++){
        cout << i << " : " << total[i] << endl;
    }
    
    return 0;
}