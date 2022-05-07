#include <iostream>

struct CandyBar{
    std::string name;
    float weight;
    int calories;
};

int main(){
    const int varNum = 15;
    CandyBar candy[varNum];
    using namespace std;
    for(unsigned i = 0; i < varNum; i++){
        candy[i].name = "Initial Name";
        candy[i].calories = i;
        candy[i].weight = i * 1.5;
    }

    for(unsigned i = 0; i < varNum; i++){
        cout << candy[i].name << ", " << candy[i].weight << ", " << candy[i].calories << endl;
    }
    return 0;
}