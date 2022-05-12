#include "sales.h"
#include <iostream>


namespace SALES{
    Sales::Sales(){
        sales[0] = sales[1] = sales[2] = sales[3] = 0.0;
        average = max = min = 0.0;
    }

    Sales::Sales(const double ar[], int n){
        for(int i = 0; i < QUARTERS; i++){
            sales[i] = 0;
        }

        double sum = 0.0;
        max = ar[0], min = ar[0];
        int size = n > QUARTERS ? QUARTERS : n;
        for(int i = 0; i < size; i++){
            sales[i] = ar[i];
            sum += ar[i];
            max = ar[i] > max ? ar[i] : max;
            min = ar[i] < min ? ar[i] : min;
        }
        average = sum / double(size);
    }

    Sales::~Sales(){}

    void Sales::setSales(){
        using namespace std;
        double tmp[QUARTERS];
        for(unsigned i = 0; i < QUARTERS; i++){
            cout << "Input nun " << i << ": " << endl;
            cin >> tmp[i];
        }
        *this = Sales(tmp, QUARTERS);
    }

    void Sales::showSales() const{
        using namespace std;
        for(int i = 0; i < QUARTERS; i++){
            cout << this->sales[i] << ", ";
        }
        cout << endl;
        cout << "Average:" << this->average << endl;
        cout << "Max:" << this->max << endl;
        cout << "Min:" << this->min << endl;
    }

}
