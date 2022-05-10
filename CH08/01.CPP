#define  _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
void print(string str, int n = 0);
int num = 0;

int main(){
    print("1st");
    print("2nd");
    print("3rd");
    print("Slef defined", 2);    

    return 0;
}

void print(string str, int n){
    if(n == 0){
        cout << str << endl;
        num++;
    }else{
        for(int i = 0; i < num; i++){
            cout << str << endl;
        }
    }
}