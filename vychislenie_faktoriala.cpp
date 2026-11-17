#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long faktorial = 1;
    
    for (int i = 1; i <= n; i++) {
        faktorial = faktorial * i;
    }
    
    cout << faktorial;
    
    return 0;
}
