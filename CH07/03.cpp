#include <iostream>
struct Box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(Box box);
void setVol(Box * boxPt);

int main(){
    Box box = {"Box1", 15.0, 12.0, 11.0, 1.1};
    Box * pt = &box;
    display(box);
    setVol(pt);
    display(box);
    return 0;
}

void display(Box box){
    using namespace std;
    cout << box.maker << endl;
    cout << box.height << endl;
    cout << box.length << endl;
    cout << box.width << endl;
    cout << box.volume << endl;
}

void setVol(Box * boxPt){
    boxPt -> volume = boxPt -> height * boxPt -> width * boxPt -> length;
}