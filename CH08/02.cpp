#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
struct CandyBar{
    char* name;
    double weight;
    int cal;
};

void setCandy(CandyBar & c1, char * n1 = "Millennium Munch", double w1 = 2.85, int h1 = 350);
void display(const CandyBar & c1);

int main(){
    CandyBar c1, c2;
    setCandy(c1);
    display(c1);
    setCandy(c2, "Tester", 1.1, 300);
    display(c2);
    return 0;
}

void setCandy(CandyBar & c1, char * n1, double w1, int h1){
    c1.name = n1;
    c1.weight = w1;
    c1.cal = h1;
}

void display(const CandyBar & c1){
    cout << c1.name << ", " << c1.weight << ", " << c1.cal << endl;
}