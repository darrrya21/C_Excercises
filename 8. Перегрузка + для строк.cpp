// перегрузка операции сложения для строк (массива char)

#include <iostream>
using namespace std; 
#include <string.h>
#include <stdlib.h>

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
            {cout << str;}
        String operator + (String ss) const
        {
            String temp; 
            if(strlen(str) + strlen(ss.str) < SZ)
            {
                strcpy(temp.str, str); 
                strcat(temp.str, ss.str);
            }
            else
            {
                cout << "\nПереполненин!";
                exit(1);
            }
            return temp;
        }
};

int main()
{
    String s1 = "С Рождеством!"; 
    String s2 = "\nС днем рождения!"; 
    String s3; 
    s3 = s1 + s2; 
    s3.display();
}


