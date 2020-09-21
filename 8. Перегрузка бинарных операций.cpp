#include <iostream>
using namespace std; 


class Distance
{
    private:
        int feet; 
        float inches;
    public:
        Distance(): feet(0), inches(0.0)
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
        Distance operator + (Distance) const;
};

Distance Distance::operator + (Distance d2) const
{
    int f = feet + d2.feet; 
    float i = inches + d2.inches;
    if(i >= 12)
    {
        ++f;
        i -= 12;
    }
    return Distance(f, i);
}

int main()
{
    Distance d1(5, 2.3); 
    Distance d2; 
    d2.getdist(); 
    Distance d3 = d1 + d2;
    d3.showdist();
}
