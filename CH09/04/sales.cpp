#include "sales.h"
#include <iostream>


namespace SALES{
    
    using namespace std;
    
    void setSales(Sales & s, const double ar[], int n){
        double sum = 0.0;
        s.max = ar[0];
        s.min = ar[0];
        int size = n > QUARTERS ? QUARTERS : n;
        for(int i = 0; i < n; i++){
            s.sales[i] = ar[i];
            sum += ar[i];
            s.max = s.max > ar[i] ? s.max : ar[i];
            s.max = s.max < ar[i] ? s.min : ar[i];
        }
        s.average = sum / double(size);
    }

    void setSales(Sales & s){
        double sum = 0.0;
        s.min = 0;
        s.max = 0;
        double temp;
        for(int i = 0; i < QUARTERS; i++){
            cout << "Input val: " << endl;
            cin >> temp;
            s.sales[i] = temp;
            sum += temp;
            s.min = s.min < temp ? s.min : temp;
            s.max = s.max > temp ? s.max : temp;
        }    
        s.average = sum / (double) QUARTERS;
    }

    void showSales(const Sales & s){
        for(int i = 0; i < QUARTERS; i++){
            cout << s.sales[i] << "|| ";
        }
        cout << "\n" << s.max << endl;
        cout << s.min << endl;
        cout << s.average << endl;
    }

}
