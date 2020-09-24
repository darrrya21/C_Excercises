#include <iostream>
using namespace std; 

class fraction
{
    private:
        int num, denum;
    public:
        fraction(int n, int d)
        {
            if (d == 0)
                { cout << "Ошибка!"; exit(1);}
            else
                {num = n; denum = d;}
        }
        fraction(): num(0), denum(1)
            {}
        void getfrac()
        {
            cout << "Введите числитель дроби: "; cin >> num; 
            cout << "Введите знаменатель дроби: "; cin >> denum; 
            if (denum == 0)
                {cout << "Ошибка!"; exit(1);}
        }
        void showfrac()
        {
            if (denum != 0)
            {
                for (int i = min(num, denum); i > 1; i--)
                {
                    if (num % i == 0 && denum % i == 0)
                        {num /= i; denum /= i;}
                }
                if (num > denum)
                    if (num % denum == 0)
                        {cout << num / denum << endl;}
                    else
                        {cout << num / denum << num % denum << '/' << denum;}
                else if (num == denum)
                    { cout << 1;}
                else
                    {cout << num << '/' << denum;}
            }
            else
                {cout << "Ошибка!"; exit(1);}
        }
        fraction operator + (fraction f2)
        {
            int d = denum * f2.denum; 
            int n = f2.denum * num + denum * f2.num; 
            return fraction (n, d); 
        }
        fraction operator - (fraction f2)
        {
            int d = denum * f2.denum; 
            int n = f2.denum * num - denum * f2.num; 
            return fraction (n, d); 
        }
        fraction operator * (fraction f2)
        {
            int d = denum * f2.denum; 
            int n = num * f2.num;
            return fraction (n, d); 
        }
        
        fraction operator / (fraction f2)
        {
            int d = denum * f2.num;
            int n = num * f2.denum; 
            return fraction (n, d);
        }
        void operator += (fraction f2)
        {
            int d = denum;
            denum *= f2.denum; 
            num = f2.denum * num + d * f2.num;
        }
        void operator -= (fraction f2)
        {
            int d = denum;
            denum *= f2.denum; 
            num = f2.denum * num - d * f2.num;
        }
        
        void operator *= (fraction f2)
        {
            denum *= f2.denum; 
            num *= f2.num;
        }
        void operator /= (fraction f2)
        {
            denum *= f2.num; 
            num *= f2.denum;
        }
}; 

int main()
{
    fraction f1(3, 4); 
    fraction f2(1, 4); 
    f1 /= f2; 
    f1.showfrac();
}