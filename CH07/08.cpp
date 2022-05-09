#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const char* Snames[Seasons] = {"Sp", "Su", "Fa", "Wi"};
using namespace std;
struct Express{
    double express[Seasons];
};

void fillA(double * pa);
void showA(const double * da);


void fillB(Express * pa);
void showB(const Express da);

int main(){
    double data[Seasons];
    fillA(data);
    showA(data);

    cout << "B" << endl;
    Express b;
    fillB(&b);
    showB(b);

    return 0;
}

void fillA(double* pa) {
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void showA(const double * da){
    double total = 0;
    for(int i = 0; i < Seasons; i++) {
        total += da[i];
    }
    cout << total << endl;
}

void fillB(Express * pa){
    for(int i = 0; i < Seasons; i++) {
        cin >> pa->express[i];
    }
}

void showB(const Express da){
    double total = 0;
    for(int i = 0; i < Seasons; i++) {
        total += da.express[i];
    }
    cout << total << endl;
}