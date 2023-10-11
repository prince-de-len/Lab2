/*************************************
* Автор: Тимофеев Гордей Евгеньевич. ПИ-231
* Версия 3
* Название: Циклы с пред- и постусловием (Вариант 13)
* ссылка: https://onlinegdb.com/wcE16nTKG
************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double g, t;
           // t = 0.2, 0.4, 0.6, 0.8, 1, 2, 3, 4, 5 мин
    int counter;
    
    cout << fixed;
    cout.precision(3);
    
    while (0 <= t && t < 1) {
        
        cin >> t;
        
        g = 4.57 * (1 - exp(-0.73 * t) );
        
        cout << "t = " << t << " g = " << floor(g * 1000) / 1000 << endl;
        
        ++counter;
        if (i == 10) {
            break;
        }
    }
    
    do {
        
        cin >> t;
        
        g = 4.57 * (1 - exp(-0.73 * t) );
        
        cout << "t = " << t << " g = " << floor(g * 1000) / 1000 << endl;
        
        ++counter;
        if (counter == 10) {
            break;
        }
    }
    while (t > 1);
    
    return 0;
}
