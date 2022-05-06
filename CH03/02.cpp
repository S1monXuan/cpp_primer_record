#include <iostream>

int main(){
    using namespace std;
    const float height_meter = 0.0254;
    const float weight_pounds = 2.2;
    const int feet_inch = 12;

    int height_in_feet, weight_in_pounds;
    cout << "input height in feet" << endl;
    cin >> height_in_feet;
    cout << "input weight in pounds" << endl;
    cin >> weight_in_pounds;

    float height_in_inches = height_in_feet / 12;
    float height_in_meters = height_in_inches * height_meter;

    float weight_in_kilo = weight_in_pounds / weight_pounds;
    float BMI = weight_in_kilo / (height_in_meters * height_in_meters);
    cout << "BMI" << BMI << endl;
    return 0;
}