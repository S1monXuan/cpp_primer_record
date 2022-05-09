#include <iostream>
float harmonic(const int * a, const int * b);

int main(){
    using namespace std;
    int a = 1, b = 1;
    while((a != 0) && (b != 0)){
        cout << "input a:";
        cin >> a;
        cout << "input b:";
        cin >> b;
        cout << harmonic(&a, &b) << endl;
    }

    return 0;
}

float harmonic(const int * a, const int * b){
    return *a * *b * 2.0 / (*a + *b);
}