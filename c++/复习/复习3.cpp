#include <iostream>
using namespace std;

class Complex {
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex (double r){
	real=r;
	imag=0;
    }
    Complex (double r, double i) {
        real = r;
        imag = i;
    }
   operator double(){
   
   return real;
   
   }
      void Complex::display() 
{ 
  cout<<"("<<real<<", "<<imag<<")"<<endl; 
 } 

private:
    double real;
    double imag;
};

int main(){
Complex c1(3,4);
double d1;	
d1=2.5+c1;
cout<<"d1="<<d1<<endl; 
Complex c2=Complex(d1);
c2.display();	
return 0;
}
