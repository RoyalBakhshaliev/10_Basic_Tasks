#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    const int MAX = 100;
    int massiv[MAX];
    
    for (int i = 0; i < n; i++) {
        cin >> massiv[i];
    }
    
    int kolichestvo = 0;
    for (int i = 0; i < n; i++) {
        if (massiv[i] > 0) {
            kolichestvo++;
        }
    }
    
    cout << kolichestvo;
    
    return 0;
}
