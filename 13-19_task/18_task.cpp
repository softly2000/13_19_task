//Задание 18

#include <iostream>
using namespace std;

int main() 
{
    int n = 12;
    int buf;
    int arr_1[n] = {1,2,3,4,5,6,7,8,9,0,2,3};
    int arr_2[n] = {4,5,6,7,8,9,1,3,4,5,6,7};
    cout << "\narr_1 - ";
    for(int i = 0; i < n; i++)cout << arr_1[i];
    cout << endl;
    cout << "arr_2 - ";
    for(int i = 0; i < n; i++)cout << arr_2[i];
    cout << endl;
    
    for(int i = 0; i < n; i++) {
    
        buf = arr_1[i];
        arr_1[i] = arr_2[i];
        arr_2[i] = buf;
    }
    
    cout << "\n\x1b[44m------------------------------\n\x1b[0m";
    cout << endl << "arr_1 - ";
    for(int i = 0; i < n; i++)cout << arr_1[i];
    cout << endl;
    cout << "arr_2 - ";
    for(int i = 0; i < n; i++)cout << arr_2[i];
}
