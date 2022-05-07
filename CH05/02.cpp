// page 251
//redo 5.4
#include <iostream>
#include <array>
const int ArSize = 16;

int main(){
    using namespace std;
    array <long double, 100> res;
    res[0] = res[1] = 1;
    for(int i = 2; i < 101; i++){
        res[i] = i * res[i - 1];
    }
    cout << "100 != " << res[100] << endl;
    // long long factorials[ArSize];
    // factorials[1] = factorials[0] = 1LL;
    // for(int i = 2; i < ArSize; i++){
    //     factorials[i] = i * factorials[i - 1];
    // }
    // for(int i = 0; i < ArSize; i++){
    //     std::cout << i << " != " << factorials[i] << std::endl;
    // }
    return 0;
}