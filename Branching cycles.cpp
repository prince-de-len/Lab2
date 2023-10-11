/*************************************
* Автор: Тимофеев Гордей Евгеньевич. ПИ-231
* Версия 2
* Название: Циклы с пред- и постусловием (Вариант 13)
* ссылка: https://onlinegdb.com/-ddIjvvtc
************************************/
#include <iostream>

using namespace std;

int main() {
    int t_1, t_2;
    double d_1, d_2, a_1, a_2, t_c, x;
    int t;  //t = 500, 400, 250, 150
    
    t_1 = 650;
    t_2 = 45;
    d_1 = 55. / 100;
    d_2 = 13. / 100;
    a_1 = 0.8;
    a_2 = 0.2;
    t_c = ( (a_1 / d_1) * t_1 + (a_2 / d_2) * t_2)
    / ( (a_1 / d_1) + (a_2 / d_2) );
    
    cout << "Введите t:" << endl;
    
    for (int counter = 1; counter < 5; ++counter) {
        
        cin >> t;
        
        if (t > t_c) {
            x = ( (t - t_1) / (t_c - t_1) ) * d_1;
        }
        else {
            x = ( (t - t_c) / (t_2 - t_c) ) * d_2 + d_1;
        }
        
        cout << x << endl;
    }
    
    return 0;
}
