#include <iostream>
#include <array>

int main(){
    using namespace std;
    const int size = 10;
    array<double, size> donation;
    double sum_donation;
    double avg_donation;
    int larger = 0, count = 0;
    while((count < 10) && (cin >> donation[count])){
        sum_donation += donation[count];
        avg_donation = sum_donation/(count + 1);
        count++;
    } 

    for(int i = 0; i < count; i++){
        if(donation[i] > avg_donation){
            larger++;
        }
    }

    cout << "Avg: " << avg_donation
        << ", larger number: " << larger << endl;

    return 0;
}