#include <iostream>
using namespace std; 

struct coor
{
    int deg; 
    float min; 
    char dir; 
};

class ship
{
    private: 
        static int count; 
        int pp;
        coor coordinate1;
        coor coordinate2;
        
    public: 
        ship()
            {pp = ++count;}
            
        void getinfo()
        {
            cout << "Введите градус и минуты широты: "; 
            cin >> coordinate1.deg >> coordinate1.min; 
            cout << "Введите направление: "; 
            cin >> coordinate1.dir; 
            
            cout << "Введите градус и минуты долготы: "; 
            cin >> coordinate2.deg >> coordinate2.min; 
            cout << "Введите направление: "; 
            cin >> coordinate2.dir;
        }
        
        void showinfo()
        {
            cout << "Учетный номер: " << pp << endl;
            cout << "Координаты широты: " << coordinate1.deg 
            << "'" << coordinate1.min << " " << coordinate1.dir << endl;
            
            cout << "Координаты долготы: " << coordinate2.deg 
            << "'" << coordinate2.min << " " << coordinate2.dir; 
        }
            
        
}; 

int ship::count = 0;

int main()
{
    ship s1, s2; 
    s1.getinfo(); 
    s1.showinfo(); 
}