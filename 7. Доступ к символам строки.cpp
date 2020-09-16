// доступ к символам строки

#include <iostream>
#include <string>
using namespace std; 

int main()
{
    char chararray[80];
    string word; 
    
    cout << "Введите слово: "; cin >> word; 
    int wlen = word.length();
    for(int j = 0; j < wlen; j++)
        {cout << word.at( j );}
    cout << endl;
    
    word.copy(chararray, wlen, 0);
    chararray[wlen] = 0;
    cout << chararray;
    
}

