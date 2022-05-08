#include <iostream>

int main(){
    using namespace std;
    const int strsize = 40;
    const int size = 5;
    struct Bop{
        char fullname[strsize];
        char title[strsize];
        char bopname[strsize];
        int preference;
    };

    const Bop bops[size] = {
        {"Wimp Macho", "bbb", "c", 0},
        {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
        {"Celia Laiter", "2AAAA", "3AAAAA", 2},
        {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
        {"Pat Hand", "4CCCC", "3CCCCC", 1}
    };

    char input;
    while(cin >> input){
        if(input == 'q'){
            break;
        }

        for(int i = 0; i < size; i++){
            switch(input){
                case 'a':
                    cout << bops[i].fullname << endl;
                    break;
                case 'b':
                    cout << bops[i].bopname << endl;
                    break;
                case 'c':
                    cout << bops[i].preference << endl;
                    break;
                case 'd':
                    cout << bops[i].title << endl;
                    break;                    
            }
        }
    }
    return 0;
}