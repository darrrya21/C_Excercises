// массив из структур
#include <iostream>
using namespace std; 

const int SIZE = 4; 
struct part
{
    int modelnum;
    int partnum; 
    float cost; 
}; 

int main()
{
    int n; 
    part apart [SIZE]; 
    
    for(n = 0; n < SIZE; n++)
    {
        cout << endl; 
        cout << "Введите номер модели: "; cin >> apart[n].modelnum; 
        cout << "Введите номер части: "; cin >> apart[n].partnum; 
        cout << "Введите стоимость: "; cin >> apart[n].cost; 
    }
    
    for(n = 0; n < SIZE; n++)
    {
        cout << "Модель: " << apart[n].modelnum << endl
        << "Часть: " << apart[n].partnum << endl
        << "Стоимость: " << apart[n].cost << endl << endl;
    }
}