//Самолет имеет максимальную взлетную массу M_max (тонн), массу пустого самолета M_пуст и запас топлива M_т.
//Напишите программу, которая вычисляет максимальную допустимую массу полезной нагрузки. 

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
