#include <iostream>
using namespace std;
class Point{
	public:
	Point(float x=0,float y=0);
void setPoint(float,float);

virtual float printArea() const{	
    return 0.0;
	}	
friend ostream & operator<<(ostream &output,const Point &p);		
virtual void shapeName()const=0;

protected:
	float x,y;
};


Point::Point(float a,float b){
	x=a;y=b;
}

ostream &operator <<(ostream &output,const Point &p){
	output<<"["<<p.x<<","<<p.y<<"]"<<endl;
	return output;
} 
class Rectangle:public Point		{
  public:
  Rectangle(float x,float y):Point(x,y){
};
  virtual float printArea()const;
  virtual void shapeName() const{
				cout<<"Rectangle:";
		};	
};

	float Rectangle	::printArea() const{
		cout<<x*y<<endl;
	};
class Triangle:public Point	   {
	public:
   Triangle (float x,float y):Point(x,y){
   	
   };   
    virtual float printArea()const;
	virtual void shapeName()const{
				cout<<"Triangle:";
		};	
  };

  float Triangle::printArea() const{
		cout<<x*y*0.5<<endl;
	}	
int main(){
	Triangle tri(5.5,4.5);
	Rectangle rec(3,7);
    Point *pt;
	pt=&rec;
	pt->shapeName(); 
	pt->printArea();
	pt=&tri;
	pt->shapeName(); 
	pt->printArea();

	
return 0;	
}