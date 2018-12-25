#include <iostream>
using namespace std;
class Shape
{
public:
	virtual float area()  {
		return 0.0;} 
	virtual float volume()  { return 0.0; }
	virtual void shapeName 	()const = 0;

	};
class Point:public Shape
{
	public:
	virtual void shapeName() const{
		cout<<"Point:"<<endl;
	}
	Point(float x = 0, float y = 0);
	float getX()  {
		return x;
	}
	float getY() {
		return y;
	}
	friend ostream &operator<<(ostream&,   Point &);
protected:
	float x,y;

};
Point::Point(float a,float b)
{
	x = a;y = b;
}
ostream &operator<<(ostream&output,   Point &p) {
	output << "[" << p.x << "," << p.y << "]" << endl;
	return output;
}
class Circle:public Point
{
public:
	Circle(float x = 0,float y = 0,float r=0);

	virtual float area() ;
	virtual void shapeName()const  { cout << "Circle:"; }
	friend ostream &operator <<(ostream &,   Circle&);

protected:
	float radius;
};

Circle::Circle(float a,float b,float r):Point(a,b),radius(r){}

float Circle::area()  {
	return 3.14159*radius*radius;
}
ostream &operator<<(ostream&output, Circle&  c) {
	output << "[" << c.x << "," << c.y << "], r ="<<c.radius<<endl;
		return output;
}


class Cylinder:public Circle{
public:
	Cylinder(float x = 0, float y = 0, float r = 0,float h=0);
	virtual float area() ;
    virtual float volume()  ;
	virtual void shapeName() const { cout << "Cylinder:"; }
	friend ostream &operator <<(ostream &,  Cylinder&);
protected:
	float height;
};

Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r),height(h) {}
float Cylinder::area()  {
	return 2*3.14159*radius*radius+2*3.14159*radius*height;
}
float Cylinder::volume()  {
	return 3.14159*radius*radius*height;
}
ostream &operator<<(ostream&output, Cylinder&cr) {
	output << "[" << cr.x << "," << cr.y << "], r = "<<cr.radius<<",h="<<cr.height<<endl;
		return output;
}
int main() {
	Point point(3.2, 4.5);
	Circle circle(2.4, 1.2, 6);
	Cylinder cylinder(3.5, 4.5, 5.8,9);
	point.shapeName();
	cout << point << endl;
	circle.shapeName();
	cout << circle << endl;
	cylinder.shapeName();
	cout << cylinder << endl;
		Shape *pt;
	pt = &point;
	pt->shapeName();
	point.getX();
	point.getY();
	pt->area();
	pt = &circle;
	pt->shapeName();
	circle.getX();
	circle.getY();
	pt->area();
	pt->volume();
	pt = &cylinder;
	pt->shapeName();
	cylinder.getX();
	cylinder.getY();
	pt->area();
	pt->volume();
	return 0;
}