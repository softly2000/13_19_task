//Задание 17

#include <iostream>
using namespace std;

struct Client {
  
  string fam;
  int telef;
  bool temp;
};

int main() 
{
    int n = 4;
    Client client[n];
    cout << "\n\tПрограмма\n";
    for(int i = 0; i < n; i++) {
        
        cout << "\nВведите данные: \n\n";
        cout << "1. Фамилия - ";cin >> client[i].fam;
        cout << "2. Телефон - ";cin >> client[i].telef;
        cout << "\nВарианты ответов: Да = 1/ Нет = 0\n";
        cout << "\n3. Наличие температуры - ";cin >> client[i].temp;
    }
    for(int i = 0; i < n; i++)
    if(client[i].temp == 1) {
        
        cout << "\n\n\x1b[42m. Фамилия: " << client[i].fam << "\x1b[0m";
        cout << "\n\x1b[44m. Наличие температуры:" << client[i].temp << "\x1b[0m";
    }    
}