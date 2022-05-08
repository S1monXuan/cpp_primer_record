#include <iostream>
#include <cctype>

int main(){
    using namespace std;
    char input;

    cout << "Enter a character:";
    while((input = cin.get()) != '@'){
        if(isdigit(input)){
            continue;
        }else if(islower(input)){
            input = toupper(input);
        }else{
            input = tolower(input);
        }
        cout << input;
    }

    return 0;
}