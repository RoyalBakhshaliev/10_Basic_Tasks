#include <iostream>
using namespace std;

int main() {
    double M_max, M_pust, M_t;
    cin >> M_max >> M_pust >> M_t;
    
    double M_poleznaya = M_max - M_pust - M_t;
    
    if (M_poleznaya < 0) {
        cout << "Oshibka: peregruz";
    }
    else {
        cout << M_poleznaya;
    }
    
    return 0;
}
