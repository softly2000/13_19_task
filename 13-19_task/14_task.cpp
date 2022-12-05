//Задание 14

#include <iostream>
using namespace std;

int ten(int p1)
{
    int sum;
    if(p1 < 0)sum = p1*p1*p1;
    else sum=1;
    return sum;
}
int main()
{
   int p,te;
   cout << "p= ";cin >> p;
   te = ten(p);
   cout << te;
} 