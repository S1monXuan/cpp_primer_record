#include "sales.h"
#include <iostream>

int main(){
    using namespace SALES;
    Sales s1;
    Sales s2;

    const double zeros[] = { 0.0, 0.0, 0.0, 0.0 };
    const double test[] = { 100.1, 200.2, 300.3 };
    
    s1.setSales();
    s1.showSales();

    // s2.setSales();
    // // setSales(s2, test, 3);
    // s2.showSales();
    
    return 0;
}