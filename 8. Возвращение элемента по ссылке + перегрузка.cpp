// безопасный массив с отдельными функциями

#include <iostream>
using namespace std; 

const int LIMIT = 100; 
class safearr
{
    private:
        int arr[LIMIT];
    public:
        int& access(int n)
        {
            if(n < 0 || n >= LIMIT)
                {cout << "Ошибка!" << endl; exit(1);}
            else
                {return arr[n];}
        }
}; 

int main()
{
    safearr s1; 
    for(int i = 0; i < LIMIT; i++)
        {s1.access(i) = i * 10;}
    for(int i = 0; i < LIMIT; i++)
    {
        int temp = s1.access(i);
        cout << temp;
    }
}

