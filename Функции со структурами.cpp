#include <iostream>
using namespace std; 

struct dist
{
    int feet; 
    float inches; 
}; 

dist smd(dist d1, dist d2); 

int main()
{
    dist d1 = {8, 5.5}; 
    dist d2 = {8, 2.3}; 
    dist d3 = smd(d1, d2); 
    cout << d3.feet << "/" << d3.inches;
}

dist smd(dist d1, dist d2)
{
    if(d1.feet > d2.feet)
    {
        return d1; 
    }
    else if(d1.feet < d2.feet)
    {
        return d2; 
    }
    else if(d1.inches > d2.inches)
    {
        return d1;
    }
}