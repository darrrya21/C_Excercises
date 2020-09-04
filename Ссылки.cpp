#include <iostream>
using namespace std; 
 struct dist
 {
     int feet; 
     float inches;
 };
 
 void scale(dist& dd, float fact); 
 void engldisp(dist dd); 
 
 int main()
 {
     dist d1 = {12, 6.5}; 
     dist d2 = {10, 5.5}; 
     
     engldisp(d1); 
     scale(d1, 0.5); 
     engldisp(d1);
     
     engldisp(d2); 
     scale(d2, 0.5); 
     engldisp(d2);
 }
 
 void engldisp(dist dd)
 {
     cout << dd.feet << "/" << dd.inches << endl;
 }
 
 void scale(dist& dd, float fact)
 {
     float temp = (dd.feet * 12 + dd.inches) * fact;
     dd.feet = static_cast<int>(temp/12); 
     dd.inches = temp - dd.feet * 12;
 }
 
 