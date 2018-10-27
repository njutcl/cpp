#include <iostream>
using namespace std;
class Student
	{
	public:
Student(int n,int m):sno(n),score(m){
}
void display()
{
	cout<<sno<<" "<<score<<endl;
}
	private:
	int sno;
	int score;
};
int main(){
int i;
Student a[5]={
	            Student(93001,100),
		        Student(93002,100),
			    Student(93003,100),
				Student(93004,100),
				Student(93005,100)
};
 
for(i=0;i<5;i+=2)
{
Student *p1=&a[i];
p1->display();	
}
return 0; 
}