//Задание 19

#include <iostream>
using namespace std;

int main() 
{
    int n = 8;
    bool priz[n];
    cout << endl << "\tПрограмма\n\n\x1b[44mНахождение животного по признаком!\x1b[0m";
    cout << "\n\nВарианты ответов: Да = 1/Нет = 0\n";
    string text[n] = {
        
        "\n1. Размер большой - ",
        "2. Хвоста Нет - ",
        "3. Бегает быстро - ",
        "4. Зубы есть - ",
        "5. Не хищник - ",
        "6. Рога есть - ",
        "7. Летает - ",
        "8. Зубов нет - ",
    };
    for(int i = 0; i < 2; i++) {
        
        for(int i = 0; i < n; i++) {
           cout << text[i];
           cin >> priz[i];
        }
        if(priz[0] && priz[1] && priz[2] && priz [3] && priz[4] && priz[5])
           if(!priz[6] && !priz[7])cout << "\n\x1b[44mЭто Олень!\x1b[0m\n";
           else cout << "\nЕсть признаки оленя\n";
        else cout << "\n\x1b[41mЖивотное неопределено!\x1b[0m\n";  
    }   
}