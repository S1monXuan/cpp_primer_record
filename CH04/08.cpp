#include <iostream>
#include <string>

struct Pizza{
    std::string company_name;
    int diameter;
    int weight;
};

int main(){
    using namespace std;
    Pizza * pi = new Pizza();

    cout << "Input name of diameter:\n";
    cin >> pi -> diameter;
    cout << "Input name of weight:\n";
    cin >> pi -> weight;

    cin.get();
    cout << "Input name of company:\n";
    getline(cin, pi -> company_name);


    cout << "company name: " << pi -> company_name 
        << ", diamater: " << pi -> diameter 
        << ", weight: " << pi -> weight << endl;
    delete pi;  
    return 0;
}