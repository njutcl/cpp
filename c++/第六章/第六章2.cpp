#include <iostream>
using namespace std;
class Shape{
	public:
	virtual float printArea() const{
		return 0.0;
	}	
	virtual void shapeName()const=0;
};
class Circle:public Shape{
  public:  
  Circle(float r):radius(r){
  	
  };
  virtual float printArea()const;
		virtual void shapeName()	const{
			cout<<"Circle:";
		}
  protected:
  float radius;	
};

float Circle::printArea()const{
		return 3.14*radius*radius;
	
}


class Rectangle:public Shape	{
  public:
  Rectangle(float h,float w):height(h),width(w){
  	
  };
   virtual float printArea()const;
		virtual void shapeName() const{
				cout<<"Rectangle:";
		};	
  protected:
  float height;		
  float width;
};

	float Rectangle	::printArea() const{
		return  height*width;
	};
	class Triangle:public Shape	   {
	public:
   Triangle (float h,float b):height(h),bottom(b){
   	
   };   
    virtual float printArea()const;
	virtual void shapeName()const{
				cout<<"Triangle:";
		};	
   protected:
  float height;		
  float bottom;
  };

  float Triangle::printArea() const{
		return height*bottom*0.5;
	}	
	
	
	
	class Square:public Shape	   {
	public:
   	Square (float b):border(b){
   	
   };   
    virtual float printArea()const;
	virtual void shapeName()const{
				cout<<"Square:";
		};	
   protected:		
  float border;
  };

  float Square::printArea() const{
	return border*border;
	}	
	
	
	class Trapezoid:public Shape	   {
	public:
   Trapezoid (float h,float b,float t):height(h),bottom(b),top(t){
   	
   };   
    virtual float printArea()const;
	virtual void shapeName()const{
				cout<<"Trapezoid:";
		};	
   protected:
  float height;		
  float bottom;
  float top;
  };

  float Trapezoid::printArea() const{
		return height*(bottom+top)*0.5;
	}	
	
	
	int main(){
			Triangle tri(5.5,4.5);
	Rectangle rec(3,7);
	Circle cir(6);
		Trapezoid tra(10,5.5,4.5);
	Square squ(6);
		Shape *pt[5]={
			&tri,&rec,&cir,&tra,&squ
		};
		int i;
		double area=0;
		for(i=0;i<5;i++){
area+=pt[i]->printArea();				
		} 
		cout<<"总面积是："<<area<<endl;
		
		return 0;
	} 