#include <iostream>
using namespace std; 

const char ESC = 27;
const double TOLL = 0.5;

class tollBoth
{
    private: 
        unsigned int count; 
        double sum; 
        
    public:
    
        tollBoth(): count(0), sum(0)
            {}
        void payingCar()
        {
            count++; 
            sum +=TOLL;
        }
        
        void nopayCar()
        {
            ++count; 
        }
        
        void display()
        {
            cout << "Число машин: " << count << endl
            << "Сумма: " << sum << endl;
        }

};

int main()
{
    char ch;
    tollBoth driver; 
    do
    {
        cout << "Нажмите клавишу (p/np/esc): "; 
        cin >> ch;
        
        if(ch == 'p')
        {
            driver.payingCar();
        }
        else if(ch == 'n')
        {
            driver.nopayCar();
        }
    }
    while(ch != ESC); 
    driver.display();
}