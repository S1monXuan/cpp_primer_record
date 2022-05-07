#include <iostream>
#include <string>

struct pizza{
    std::string company_name;
    int diameter;
    int weight;
};

int main(){
    using namespace std;
    pizza pizza;
    cout << "Input name of company:\n";
    getline(cin, pizza.company_name);
    cout << "Input name of diameter:\n";
    cin >> pizza.diameter;
    cout << "Input name of weight:\n";
    cin >> pizza.weight;

    cout << "company name: " << pizza.company_name 
        << ", diamater: " << pizza.diameter 
        << ", weight: " << pizza.weight << endl;  
    return 0;
}