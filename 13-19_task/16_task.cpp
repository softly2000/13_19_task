//Задание 16

#include <iostream>
using namespace std;

bool ques(string data[],string que[],string getData[])
{
    cout << que[0] << "\n";
    for(int i=0; i<3; i++){
        cout << i+1 << ". " << data[i] << "\n";
    }
    char num;
    bool set = true;
    while(set)
    {
      cout << "\n\nВведите номер ответа: ";cin >> num;
      if(num == '2')
      {
          getData[0];
          break;
          return num;
      }
      
      else 
          cout << "\nВариант неправильный!\n";
          cout << "\nПопробуите еще раз!";
    }
    return true;
}

int main()
{
    string que[] = {"\n\t\t\tТЕСТ \n\n\x1b[44mС помощью какого оператора можно досрочно завершить цикл ?\x1b[0m\n\nКакой вариант правильный ?\n"};
    string data[] = {"continue","break","for\n"};
    string getData[] = {"break"};
    bool get = ques(data,que,getData);
    if(data[1] == getData[0]){
        if(get)cout << "\n\nВариант правильный!";
    }
}