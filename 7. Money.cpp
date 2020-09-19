#include <iostream>
#include <string>
#include <cstdlib>
using namespace std; 

class bMoney
{
    private:
        long double m;
    public:
        void getmoney()
        {
            cout << "Введите сумму: "; 
            string s;
            getline(cin, s); 
            int n = s.find_first_of("$,");
            while(n >= 0)
            {
                s.erase(n, 1);
                n = s.find_first_of("$,");
            }
            char arr[s.length() + 1]; 
            s.copy(arr, s.length(), 0); 
            m = atof(arr);
        }
        void showm()
            {cout << m << endl;}
        
        string ldtoms()
        {
            string snew = to_string(m); 
            snew.insert(0, "$"); 
            int dot = snew.find("."); 
            for(int i = 1; i < dot/3 + 1; i++)
            {
                snew.insert(dot - 3*i, ",");
            }
            while(snew.compare(snew.length() - 1, snew.length(), "0") == 0)
            {
                snew.erase(snew.length() - 1, 1);
            }
            
            return snew;
        }
}; 

int main()
{
    bMoney m1; 
    m1.getmoney(); 
    m1.showm();
    cout << m1.ldtoms();
}