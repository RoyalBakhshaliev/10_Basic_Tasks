#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    double area = a * b;
    cout << "Ploshchad: " << area << endl;
    
    if (a == b) {
        cout << "Eto kvadrat";
    }
    else {
        cout << "Eto ne kvadrat";
    }
    
    return 0;
}
