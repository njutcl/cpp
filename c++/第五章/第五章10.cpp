#include <iostream>
#include <string>
using namespace std;
	class Teacher {
	public:
	Teacher(int n,string nam,char s){
		num=n;
		name=nam;
		sex=s;
	} 
	void display(){
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl; 
	}
	
	private:
	int num;
	string name;
	char sex; 
};
class BirthDate
{
	public:
	BirthDate(int y,int m,int d){
		year=y;
		month=m;
		day=d;
	}
	void display(){
		cout<<"year:"<<year<<endl;
		cout<<"month:"<<month<<endl;
		cout<<"day:"<<day<<endl; 
	}
		void change(int y,int m,int d){
		year=y;
		month=m;
		day=d;
	}
	private:
	int year;
	int month;
	int day;
};

class Professor:public Teacher
{
	public:Professor(int n,string nam,char s,int y,int m,int d):Teacher(n,nam,s),Birthday(y,m,d){	}
	void display1(){
		Teacher::display();
        Birthday.display();
	};
void change(int y,int m,int d){
	Birthday.change(y,m,d);
	
}
	private: 
	BirthDate Birthday;
};

int main(){
	Professor prof1(1,"messi",'m',1999,6,23);
	prof1.display1();
	prof1.change(1900,1,1);
	prof1.display1();
	
	return 0;
}
