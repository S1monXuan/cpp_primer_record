#include <iostream>

int main(){
    using namespace std;
    char input;
    cout << "c) Carnivore       p)Pianist" << endl;
    cout << "t) Tree            g)Game" << endl;
    
    bool exit = false;
    while(!exit && (cin >> input)){

        switch(input){
            case 'c':
                cout << "Carnivore\n";
                exit = true;
                break;
            case 'p':
                cout << "P\n";
                exit = true;
                break;
            case 't':
                cout << "t\n";
                exit = true;
                break;
            case 'g':
                cout << "g\n";
                exit = true;
                break;
            default:
                cout << "Input c, p, t, g" << endl;
                break;
        }
    }

    return 0;
}