#include <iostream>
using namespace std;
class Vector{
public:
Vector(){
    x=0;
    y=0;
};
Vector(double a,double b){
	x=a;
	y=b;
};
friend Vector operator+(Vector &v1,Vector &v2);
friend Vector operator-(Vector &v1,Vector &v2);
void display(){
		cout<<"("<<x<<","<<y<<")"<<endl;
	};
private: 
double x;
double y;
};

Vector operator+(Vector &v1,Vector &v2)
{
Vector v3;
v3.x=v1.x+v2.x;
v3.y=v1.y+v2.y;
return v3;	
}
Vector operator-(Vector &v1,Vector &v2)
{
Vector v3;
v3.x=v1.x-v2.x;
v3.y=v1.y-v2.y;
return v3;	
}
	
int main()
{
Vector v1(10,20),v2(30,40),v3,v4;
v3=v1+v2;	
v4=v1-v2;
v3.display();
v4.display(); 
	return 0;
}