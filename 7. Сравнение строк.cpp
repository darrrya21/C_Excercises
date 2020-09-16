// сравнение строк
#include <iostream>
#include <string>
using namespace std; 

int main()
{
    string aName = "Ivan"; 
    string username;
    cout << "Введите ваше имя: "; cin >> username; 
    
    if(username == aName)
        {cout << "Здраствуйте, Иван!" << endl;
         exit(1);
        }
        
    else if(username < aName)
        {cout << "Ваше имя идет до Ивана" << endl;}
    else
        {cout << "Ваше имя идет после Ивана" << endl;}
     int n = username.compare(0, 2, aName, 0, 2);
     cout << "Первые две буквы вашего имени ";
     if(n == 0)
        {cout << "совпадают c ";}
    else if(n < 0)
        {cout << "идут до ";}
    else
        {cout << "идут после ";}
    cout << aName.substr(0, 2) << endl;
}

