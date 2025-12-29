#include <iostream>
using namespace std;

class BMI {
    double weight, height;
public:
    BMI(double w, double h) {
        weight = w;
        height = h;
    }
    void show() {
        double bmi = weight / (height * height);
        cout << bmi << " ";
        if(bmi < 18.5) cout << "Underweight";
        else if(bmi < 25) cout << "Normal";
        else cout << "Overweight";
    }
};

int main() {
    double w, h;
    cin >> w >> h;
    BMI b(w, h);
    b.show();
    return 0;
}
