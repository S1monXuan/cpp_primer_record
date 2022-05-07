#include <iostream>

struct CandyBar{
    std::string name;
    float weight;
    int calories;
};

int main(){
    using namespace std;
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Name of snack: " << snack.name << endl;
    cout << "Weight of snack: " << snack.weight << endl;
    cout << "Clories of snack: " << snack.calories << endl;
    return 0;
}