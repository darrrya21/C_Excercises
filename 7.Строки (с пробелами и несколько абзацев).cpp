//Считывание строк с пробелами и абзацами

#include <iostream>
using namespace std; 

int main()
{
    char str[20]; 
    cin.get(str, 20, '$'); // cin.get() для строк с пробелами, третий аргумент как симовол оконачания ввода
    cout << str;
}
