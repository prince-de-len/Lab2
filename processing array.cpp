/*************************************
* Автор: Тимофеев Гордей Евгеньевич. ПИ-231
* Версия 1
* Название: Обработка массивов (Вариант 13)
* Ссылка: https://onlinegdb.com/Oici3_0q-
************************************/
#include <iostream>

using namespace std;

int main() {
    int number_row, number_column, value;

    double sum, average;
    
    sum = 0;
    
    cout << "Введите количество строк:";
    cin >> number_row;
    cout << "Введите количество столбцов:";
    cin >> number_column;
    
    int P[number_row][number_column];
    
    for (int row = 0; row < number_row; ++row) {
        
        cout << "Строка №" << row + 1 << "\n";
        
        for (int column = 0; column < number_column; ++column) {
            
            cout << "Введите " << column + 1 << " элемент:" << "\n";
            cin >> value;
            
            P[row][column] = value;
        }
    }
    
    for (int column = 0; column < number_column; ++column) {
        
        for (int row = 0; row < number_row; ++row) {
            
            sum += P[row][column];
            
            if (row == number_row - 1) {
                
                average = sum / number_column;
                sum = 0;
                
                cout << "Среднее арифметическое " << column + 1
                     << " столбца: " << average << endl;
            }
        }
    }
    
    return 0;
}
