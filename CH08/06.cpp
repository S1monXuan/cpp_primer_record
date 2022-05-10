#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maxn(T * t, int len);

template <> char* maxn(char*a[], int len);

int main(){
    int i[6] = {4,3,2,4,1,2};
    double d[4] = {1.2, 3.2, 3.4, 3.4};
    int maxi = maxn(i, 6);
    double maxd = maxn(d, 4);
    
    char* c[5] = { "You", "are", "my", "friends!", "better girlfriends..." };
    char* cl = maxn(c, 5);
    return 0;
}

template <typename T>
T maxn(T * t, int len){
    T temp = t[0];
    for(int i = 0; i < len; i++){
        if(t[i] > temp){
            temp = t[i];
        }
    }
    cout << temp << endl;
    return temp;
}

template <> char* maxn(char*a[], int len){
    int longest = strlen(a[0]);
    char* res;
    for(int i = 1; i < len; i++){
        if(strlen(a[i]) > longest){
            res = a[i];
        }
    }
    cout << res << endl;
    return res;
}