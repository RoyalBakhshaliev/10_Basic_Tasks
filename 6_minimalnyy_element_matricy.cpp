//Дана матрица. Найти минимальный элемент матрицы

#include <iostream>
using namespace std;

int main() {
    int stroki, stolbcy;
    cin >> stroki >> stolbcy;
    
    const int MAX = 100;
    int matrica[MAX][MAX];
    
    for (int i = 0; i < stroki; i++) {
        for (int j = 0; j < stolbcy; j++) {
            cin >> matrica[i][j];
        }
    }
    
    int minimalnyy = matrica[0][0];
    
    for (int i = 0; i < stroki; i++) {
        for (int j = 0; j < stolbcy; j++) {
            if (matrica[i][j] < minimalnyy) {
                minimalnyy = matrica[i][j];
            }
        }
    }
    
    cout << minimalnyy;
    
    return 0;
}
