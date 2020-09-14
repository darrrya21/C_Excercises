// Копирование строк

#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    char str[] = "Маленькой елочке холодно зимой."; 
    const int MAX = 80; 
    char str2 [MAX]; 
    int i;
    for(i = 0; i < strlen(str); i++)
    {
        str2[i] = str[i];
    }
    str2[i] = '\0';
    
    cout << str2;
}
