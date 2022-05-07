#include <iostream>

struct CandyBar{
    std::string name;
    float weight;
    int calories;
};

int main(){
    const int varNum = 3;
    CandyBar *pi = new CandyBar[varNum]{
        {"Mocha Munch", 2.3, 350},
        {"B B", 5, 300},
        {"j n", 4.5, 400}
    };
    using namespace std;

    for(unsigned i = 0; i < varNum; i++){
        cout << pi[i].name << ", " << pi[i].weight << ", " << pi[i].calories << endl;
    }
    return 0;
}