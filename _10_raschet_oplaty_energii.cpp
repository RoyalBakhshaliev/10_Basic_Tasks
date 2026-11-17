//Рассчитать сумму оплаты за потребленную энергию, если известны: 
//Стоимость 1 квт/час, расход энергии, коэффициент льгот (льготы могут отсутствовать).

#include <iostream>
using namespace std;

int main() {
    double stoimost, rashod, koefficient_lgot;
    cin >> stoimost >> rashod >> koefficient_lgot;
    
    double summa = stoimost * rashod;
    
    if (koefficient_lgot > 0) {
        summa = summa * koefficient_lgot;
    }
    
    cout << summa;
    
    return 0;
}
