//Задание 15

#include <iostream>
using namespace std;

bool an_priz(bool pr1,bool pr2,bool pr3) {
    
    if(pr1 == pr2 == pr3)
    return true;
    else 
    return false;
}  

int main() 
{
    bool pr1,pr2,pr3;
    cout << endl << "\t\x1b[44mПрограмма для диагностики болезни по признаком !\x1b[0m\n" << endl;
    cout << endl << "Варианты ответов: Да = 1/ Нет = 0\n" << endl;
    cout << "1. температура - ";cin >> pr1;
    cout << "2. высыпание - ";cin >> pr2;
    cout << "3. слабость - ";cin >> pr3;
    bool get = an_priz(pr1,pr2,pr3);
    if(get)cout << endl << "Ветрянка!";
    else cout << endl << "Болезнь неопределина!"; 
}