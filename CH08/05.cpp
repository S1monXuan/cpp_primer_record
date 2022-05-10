#include <iostream>
using namespace std;

template <typename T>
T max5(T* t);


int main(){
    int i[5] = {4,6,8,2,7};
    cout << max5(i) << endl;
    double d[5] = {4.5,3.2,9.1,1.0,7.3};
    cout << max5(d) << endl;
    return 0;
}

template <typename T>
T max5(T* t){
    T temp = t[0];
    for(unsigned i = 1; i < 5 ; i++){
        if(t[i] > temp){
            temp = t[i];
        }
    }
    return temp;
}