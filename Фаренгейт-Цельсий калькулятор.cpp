#include <iostream>
using namespace std; 
int main()
{
    double cel, far;
    char ch;
    cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу\ Фаренгейта.\
    \n2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
    cin >> ch;
    if(ch == 1)
    {
        cout << "Введите температуру в Цельсиях: ";
        cin >> cel; 
        far = (cel * 9/5) + 32;
        cout << "Температура в Фаренгейтах: " << far << "F";
    }
    else if(ch == 2)
    {
        cout << "Введите температуру в Фаренгейтах: ";
        cin >> far;
        cel = (far - 32) * 5/9;
        cout << "Температура в Цельсиях: " << cel << "C";
    }
    else
    {
        cout << "Ошибка. Повторите попытку." << endl;
    }
    
}
