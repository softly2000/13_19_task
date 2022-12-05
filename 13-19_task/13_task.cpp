
//Задание 13

#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i < 5; i++)
    {
    cout << endl << endl << "  Part - " << i << endl;
    string data[7];
        cout << endl << "\nВведите данные о себе!\n";
        cout << endl << "Фамилию - ";
        cin >> data[0];
        cout << "Имя - ";
        cin >> data[1];
        cout << "Год рождения - ";
        cin >> data[2];
        cout << "Месяц рождения - ";
        cin >> data[3];
        cout << "День рождения - ";
        cin >> data[4];
        cout << endl;
        cout << "Введите текущий месяц - ";
        cin >> data[5];
        cout << "Введите текущий день - ";
        cin >> data[6];
    
        int bimon = stoi(data[3]);
        int biday = stoi(data[4]);
    
        int mont = stoi(data[5]);
        int day = stoi(data[6]);
    
        if(bimon == mont && biday == day)
        {
            cout << endl << "\x1b[4mВаше день рождения сегодня!\x1b[0m";
        }
        else{ 
            if(bimon <= mont && biday <= day)
            {
                cout << endl << "\x1b[44mДля " << data[0] << " " << data[1] << " день рождения прошел!\x1b[0m";
            }
            else
            { 
                cout << endl << "\x1b[42mДля " << data[0] << " " << data[1] << " день рождения будет позже!\x1b[0m";
            }
        }
    }    
}