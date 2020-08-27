#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    char ch, sign;
    do{
        cout << "Введите первые два числа: "; cin >> a >> b;
        cout << "Введите вторые два числа: "; cin >> c >> d; 
        cout << "Введите знак: "; cin >> sign;
        switch(sign)
        {
            case '+': 
                cout << a/b + c/d; 
                break;
            case '-': 
                cout << a/b - c/d; 
                break;
            case '*': 
                cout << a/b * c/d; 
                break;
            case '/': 
                cout << a/b/c/d; 
                break;
            default: 
                cout << "Неизвестный знак. Повторите попытку.";
        }
        cout << "\nПовторить? (y/n)"; cin >> ch; 
    }
     while(ch != 'n');
}
