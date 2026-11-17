//При посадке самолет должен выдерживать угол глиссады в 3 градуса. 
//Напишите программу, которая по заданной высоте H и расстоянию до ВПП L определяет, соответствует ли траектория снижения стандартному углу.

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
