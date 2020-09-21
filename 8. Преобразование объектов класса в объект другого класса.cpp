/// преобразование объектов класса в объекты другого класса

#include <iostream>
using namespace std; 
#include <string>

class time12
{
    private:
        bool pm; 
        int hrs; 
        int mins;
    public:
        time12(): pm(true), hrs(0), mins(0)
            {}
        time12(bool apm, int h, int m): pm(apm), hrs(h), mins(m)
            {}
        void display() const
        {
            cout << hrs << ':'; 
            if(mins < 10)
                {cout << 0;}
            cout << mins << ' ';
            string am_pm = pm ? "p.m.":"a.m.";
            cout << am_pm;
        }
}; 

class time24
{
    private:
        int hours; 
        int minutes; 
        int seconds;
    public:
        time24(): hours(0), minutes(0), seconds(0)
            {}
        time24(int h, int m, int s): hours(h), minutes(m), seconds(s)
            {}
        void display()
        {
            if(hours < 10)
                {cout << 0;}
            cout << hours << ':';
            if(minutes < 10)
                {cout << 0;}
            cout << minutes << ':'; 
            if(seconds < 10)
                {cout << 0;}
            cout << seconds; 
        }
        operator time12() const;
};

time24::operator time12() const
{
    int hrs24 = hours; 
    bool pm = hours < 12 ? false:true;
    int roundMins = seconds < 30 ? minutes: minutes + 1;
    if(roundMins == 60)
    {
        ++hrs24; 
        roundMins = 0;
        if(hrs24 == 12 || hrs24 == 24)
            {pm = (pm == true) ? false: true;}
    }
    int hrs12 = (hrs24 < 13)? hrs24: hrs24 - 12;
    if(hrs12 == 0)
    {
        hrs12 = 12; 
        pm = false;
    }
    return time12(pm, hrs12, roundMins);
}

int main()
{
    int h, m, s; 
    cout << "Введите время в 24-часовом формате: "; 
    cout << "Часы: "; cin >> h; 
    cout << "Минуты: "; cin >> m; 
    cout << "Секунды: "; cin >> s;
    
    time24 t24(h, m, s); 
    cout << "Исходное время: "; 
    t24.display(); 
    time12 t12 = t24; 
    cout << endl;
    t12.display();
}
