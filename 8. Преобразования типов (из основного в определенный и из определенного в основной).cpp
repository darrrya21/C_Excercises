// преобразования типов

#include <iostream>
using namespace std; 

class Dist
{
    private:
        const float MTF;
        int feet; 
        float inches; 
    public:
        Dist(): feet(0), inches(0.0), MTF(3.280833F)
            {}
        Dist(int f, float i): feet(f), inches(i), MTF(3.280833F)
            {}
        Dist(float meters): MTF(3.280833F)
        {
            float fltfeet = MTF * meters;
            feet = int(fltfeet); 
            inches = 12 * (fltfeet - feet);
        }
        void getdist()
        {
            cout << "Введите футы: "; cin >> feet; 
            cout << "Введите дюймы: "; cin >> inches;
        }
        void showdist()
            {cout << feet << '/' << inches << endl;}
        operator float() const
        {
            float fracfeet = inches / 12;
            fracfeet += static_cast<float>(feet); 
            return fracfeet / MTF;
        }
};

int main()
{
    float mtrs; 
    Dist d1 = 2.35F;
    d1.showdist();
    mtrs = static_cast<float>(d1);
    cout << mtrs << endl;
    Dist d2(3, 2.9); 
    mtrs = d2;
    cout << mtrs;
}

