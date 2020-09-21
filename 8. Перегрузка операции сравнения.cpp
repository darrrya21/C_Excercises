// перегрузка операций сравнения

#include <iostream>
using namespace std; 

class Distance
{
    private:
        int feet;
        float inches; 
    public:
        Distance(): feet(0), inches(0)
            {}
        Distance(int f, float i): feet(f), inches(i)
            {}
        void getdist()
        {
            cout << "Введите футы: "; cin >> feet;
            cout << "Введите дюймы: "; cin >> inches; 
        }
        void showdist()
            {cout << feet << '/' << inches << endl;}
        bool operator < (Distance) const;
};

bool Distance:: operator < (Distance d2) const
{
    float bf1 = feet + inches / 12; 
    float bf2 = d2.feet + d2.inches / 12; 
    return (bf1 < bf2) ? true : false;
}

int main()
{
    Distance d1(5, 2.3); 
    Distance d2; 
    d2.getdist(); 
    if(d1 < d2)
        {cout << 1;}
    else
        {cout << 0;}
}


