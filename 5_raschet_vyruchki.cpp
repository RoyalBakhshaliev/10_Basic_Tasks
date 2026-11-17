//Определить наибольшую выручку от продажи трех видов товаров, если известны: цена товара; количество проданных товаров каждого вида.

#include <iostream>
using namespace std;

int main() {
    double cena1, cena2, cena3;
    int kolichestvo1, kolichestvo2, kolichestvo3;
    
    cin >> cena1 >> kolichestvo1;
    cin >> cena2 >> kolichestvo2;
    cin >> cena3 >> kolichestvo3;
    
    double vyruchka1 = cena1 * kolichestvo1;
    double vyruchka2 = cena2 * kolichestvo2;
    double vyruchka3 = cena3 * kolichestvo3;
    
    double naibolshaya = vyruchka1;
    if (vyruchka2 > naibolshaya) {
        naibolshaya = vyruchka2;
    }
    if (vyruchka3 > naibolshaya) {
        naibolshaya = vyruchka3;
    }
    
    cout << naibolshaya;
    
    return 0;
}
