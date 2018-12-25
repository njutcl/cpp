
#include <iostream>
using namespace std;
class Matrix{
public:
    Matrix();
    Matrix operator+(Matrix &c2);
    void display();
    void input();
private:
    int a[3][4],i,j;
};

Matrix::Matrix()
 { 	
 for( i=0;i<3;i++)
 for( j=0;j<4;j++)
 a[i][j]=0;
 } 
 
Matrix Matrix::operator +(Matrix& c2)
{Matrix c;
for(i=0;i<3;i++)
for(j=0;j<4;j++)
c.a[i][j]=a[i][j]+c2.a[i][j];
return c;
}

void Matrix::display()
{for(i=0;i<3;i++){
	
for(j=0;j<4;j++)
{
cout<<a[i][j]<<'|';	
}
cout<<'\n';}
}

 void Matrix::input()
 {
    for(i=0;i<3;i++)
     for(j=0;j<4;j++)
     cin>>a[i][j];
 } 
int main()
{
    Matrix t1,t2,t3;
	t1.input();
	t2.input();
t3=t2+t1;
cout<<"t1=";t1.display();
cout<<"t2=";t2.display();
cout<<"t1+t2=";t3.display();
return 0;
}
