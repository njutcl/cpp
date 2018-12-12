#include <iostream>
#include <string.h>
using namespace std;
class Teacher{
public:
Teacher(string,int,char,string,string,string); 
void display();
	protected:	
	string name;
	int age;
	char sex;
	string address;
	string phone;
	string title;
};

class Cadre{
	public:
	Cadre(string,int,char,string,string,string);
	void display();
	protected:	
	string name;
	int age;
	char sex;
	string address;
	string phone;
	string post;

};
class Teacher_Cadre:public Teacher,public Cadre
{
	public:
	Teacher_Cadre(string ,int ,char ,string ,string ,int ,string ,string );
	void show(); 
	protected: 
	int wages;
};

Teacher::Teacher(string n,int a,char s,string addr,string p,string t):name(n),age(a),sex(s),address(addr),phone(p),title(t){
	
};
Cadre::Cadre(string n,int a,char s,string addr,string p,string pos):name(n),age(a),sex(s),address(addr),phone(p),post(pos){
};
Teacher_Cadre::Teacher_Cadre(string n,int a,char s,string addr,string p,int w,string t,string pos):Teacher(n,a,s,addr,p,t),Cadre(n,a,s,addr,p,pos),wages(w){
	};
void Teacher::display(){
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"address:"<<address<<endl;
    cout<<"phone:"<<phone<<endl;

}

void Cadre::display(){
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"address:"<<address<<endl;
    cout<<"phone:"<<phone<<endl;

}
void Teacher_Cadre::show(){
	Teacher::display();
	cout<<"title:"<<title<<endl;
	cout<<"wage:"<<wages<<endl;
}



int main()
	{
	Teacher_Cadre fw("ltc",18,'m',"scu","123456789",5000,"police","policia");
	fw.show();	
return 0;	
}