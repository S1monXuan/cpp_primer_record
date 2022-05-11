#include "sales.h"
#include <iostream>

int main(){
    using namespace SALES;
    Sales s1;
    Sales s2;

    const double zeros[] = { 0.0, 0.0, 0.0, 0.0 };
    const double test[] = { 100.1, 200.2, 300.3 };
    
    setSales(s1);
    showSales(s1);

    setSales(s2, zeros, 4);
    setSales(s2, test, 3);
    showSales(s2);
    
    return 0;
}