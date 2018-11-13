#include<iostream> 
#include<string> 
using namespace std; 
class Teacher; 
class Student 
{public: 
   
    Student(){}; 
    Student(int m,string n,char x,float s) 
    {num=m;name=n;sex=x;score=s;} 
     void display() 
    {cout<<"num:"<<num<<endl<<"name:"<<name<<endl<<"sex:"<<sex<<endl<<"score:"<<score<<endl;} 
	int num; 
    string name; 
    char sex; 
    float score; 
}; 
  
class Teacher 
{ 
public: 
   
    Teacher(){}; 
    Teacher(int m,string n,char x,float p) 
    {num=m;name=n;sex=x;pay=p;} 
    Teacher(Student & s) 
    { 
        num=s.num; 
       name=s.name; 
        sex=s.sex; 
    } 
     void setpay(float a) 
    {pay=a;} 
    void display() 
    {cout<<"num:"<<num<<endl<<"name:"<<name<<endl<<"sex:"<<sex<<endl<<"pay:"<<pay<<endl;} 
private: 
    int num; 
  string name;
    char sex; 
    float pay; 
}; 
int main() 
{ 
    int num; 
    char name[20]; 
    char sex; 
    float score; 
    float pay; 
  cin>>num>>name>>sex>>pay;    
  Teacher teacher1(num,name,sex,pay); 
  cin>>num>>name>>sex>>score; 
    Student student1(num,name,sex,score); 
    cout<<"student1:"<<endl; 
    student1.display(); 
    Teacher teacher2=Teacher(student1); 
    teacher2.setpay(5000); 
    cout<<"teacher2:"<<endl; 
    teacher2.display(); 
    return 0; 
}