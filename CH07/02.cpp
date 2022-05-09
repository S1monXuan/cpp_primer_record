#include <iostream>
const int ArSize = 10;
using namespace std;
void input(float * scorePt, int times);
void avg_cal(float * scorePt, float * avg, int times);
void display(float * scorePt, float * avg, int times);

int main(){
    float avg;
    float scores[ArSize];
    float * pt = scores;

    input(pt, ArSize);
    avg_cal(pt, &avg, ArSize);
    display(pt, &avg, ArSize);

    cout << "Avg: " << avg << endl;
    return 0;
}

void input(float * scorePt, int times){
    float tmp;
    for(unsigned i = 0; i < 10 ; i++){
        cout << "input " << i + 1 <<" :";
        if(cin >> tmp){
            scorePt[i] = tmp;
        }
    }
}

void avg_cal(float * scorePt, float * avg, int times){
    float sum = 0;
    for(unsigned i = 0; i < times; i++){
        sum += scorePt[i];
    }
    *avg = sum / times;
}

void display(float * scorePt, float * avg, int times){
    cout << "Avg: " << *avg << endl;
    for(unsigned i = 0; i < times; i++){
        cout << scorePt[i] << ", ";
    }
    cout << "\n";
}