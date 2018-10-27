#include <iostream>
using namespace std;

class Student{
public:
	Student(int, int);
 	 void max(Student *);
	
private:
	int sno;
	int score;
};

Student::Student(int n, int m){
	sno = n;
	score = m;
};
void Student::max(Student *p){	
	int i;
	int max=p->score;
	for(i=0;i<5;i++){
		if(max < p->score){
		   max = p->score;
	}
	p++;
	}
	cout<<max<<endl;
};
		
int main(){
	Student a[5]={
	            Student(93001,10),
		        Student(93002,99),
			    Student(93003,98),
				Student(93004,90),
				Student(93005,80)
	};
	Student * p1;
	p1=a;
    p1->max(p1);
	return 0; 
}
