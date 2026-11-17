//Сортировка массива методом Фон Неймана (Слиянием).

#include <iostream>
using namespace std;

const int MAX = 100;

void sliyanie(int massiv[], int levaya, int seredina, int pravaya) {
    int leva[MAX];
    int prava[MAX];
    
    int razmer_levoy = seredina - levaya + 1;
    int razmer_pravoy = pravaya - seredina;
    
    for (int i = 0; i < razmer_levoy; i++) {
        leva[i] = massiv[levaya + i];
    }
    for (int j = 0; j < razmer_pravoy; j++) {
        prava[j] = massiv[seredina + 1 + j];
    }
    
    int i = 0, j = 0, k = levaya;
    
    while (i < razmer_levoy && j < razmer_pravoy) {
        if (leva[i] <= prava[j]) {
            massiv[k] = leva[i];
            i++;
        }
        else {
            massiv[k] = prava[j];
            j++;
        }
        k++;
    }
    
    while (i < razmer_levoy) {
        massiv[k] = leva[i];
        i++;
        k++;
    }
    while (j < razmer_pravoy) {
        massiv[k] = prava[j];
        j++;
        k++;
    }
}

void sortirovka(int massiv[], int levaya, int pravaya) {
    if (levaya >= pravaya) return;
    
    int seredina = levaya + (pravaya - levaya) / 2;
    
    sortirovka(massiv, levaya, seredina);
    sortirovka(massiv, seredina + 1, pravaya);
    
    sliyanie(massiv, levaya, seredina, pravaya);
}

int main() {
    int n;
    cin >> n;
    
    int massiv[MAX];
    for (int i = 0; i < n; i++) {
        cin >> massiv[i];
    }
    
    sortirovka(massiv, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << massiv[i] << " ";
    }
    
    return 0;
}
