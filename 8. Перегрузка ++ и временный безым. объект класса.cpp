// перегрузка операции ++
#include <iostream>
using namespace std; 

class Counter
{
    private:
        unsigned int count; 
    public: 
        Counter(): count(0)
            {}
        Counter(int c): count(c)
            {}
        unsigned int getcount()
            {return count;}
        
        Counter operator++ ()
            {return Counter(++count);}
        
        Counter operator++ (int)
            {return Counter(count++);}
};

int main()
{
    Counter c1, c2; 
    cout << c1.getcount() << endl;
    c2 = c1++; 
    cout << c2.getcount(); 
}
