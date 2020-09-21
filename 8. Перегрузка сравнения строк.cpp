// перегрузка операции сравнения ==

#include <iostream>
using namespace std;
#include <string.h>

class String
{
    private:
        static const int SZ = 80; 
        char str [SZ]; 
    public:
        String()
            {strcpy(str, "");}
        String(char s [])
            {strcpy(str, s);}
        void display()
            {cout << str << endl;}
        void getdist()
        {
            cout << "Введите строку: "; 
            cin.get(str, SZ); 
        }
        bool operator == (String ss) const
        {
            return (strcmp(str, ss.str) == 0) ? true:false;
        }
}; 

int main()
{
    String s1 = "С Новым годом!"; 
    String s2; 
    s2.getdist(); 
    s2.display();
    if(s1 == s2)
        {cout << 1;}
    else
        {cout << 0;}
}

