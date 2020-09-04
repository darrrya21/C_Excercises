#include <iostream>
using namespace std; 
unsigned long factfunc(unsigned long); 

int main()
{
    int n; 
    cout << "Введите целое число: "; cin >> n; 
    cout << "Факториал числа " << n << " равен "
    << factfunc(n) << endl;
}

unsigned long factfunc(unsigned long num)
{
    if(num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factfunc(num - 1);
    }
}