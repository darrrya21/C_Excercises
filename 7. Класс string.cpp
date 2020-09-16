#include <iostream>
#include <string>
using namespace std;

int main()
{
    string full_name, nickname, address; 
    string greeting("Здравствуйте, ");
    cout << "Введите ваше имя: "; 
    getline(cin, full_name);
    cout << "Ваше имя: " << full_name << endl;
    
    cout << "Введите ваш псевдоним: "; 
    cin >> nickname; 
    
    cout << greeting + nickname << '!' << endl;
    cout << "Введите ваш адрес в несколько строк."; 
    cout << "Окончание ввода символ '$'\n"; 
    getline(cin, address, '$'); 
    cout << "Ваш адрес: " << address << endl;
}


