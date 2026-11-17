#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double H, L;
    cin >> H >> L;
    
    const double pi = 3.141592653589793;
    double ugol = atan(H / L) * 180.0 / pi;
    
    if (ugol >= 2.5 && ugol <= 3.5) {
        cout << "Soootvetstvuet";
    }
    else {
        cout << "Ne sootvetstvuet";
    }
    
    return 0;
}
