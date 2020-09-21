// перевод обычных строк в класс String

#include <iostream>
using namespace std; 
#include <string.h>

class String
{
    private:
        enum {SZ = 80}; 
        char str[SZ];
    public:
        String()
            {str[0] = '\x0';}
        String(char s[])
            {strcpy(str, s);}
        void display()
            {cout << str;}
        operator char*()
            {return str;}
}; 

int main()
{
    String s1; 
    char xstr[] = "Ура, товарищи!";
    s1 = xstr;
    s1.display();
    String s2 = "Мы победим!"; 
    cout << static_cast<char*>(s2);
}