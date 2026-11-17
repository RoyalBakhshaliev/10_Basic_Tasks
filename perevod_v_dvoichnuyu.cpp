#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << 0;
        return 0;
    }
    
    int massiv[32];
    int i = 0;
    
    while (n > 0) {
        massiv[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        cout << massiv[j];
    }
    
    return 0;
}
