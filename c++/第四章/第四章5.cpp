
#include <iostream>
using namespace std;
class Matrix{
public:
Matrix();
    Matrix operator+(Matrix &c2);
friend ostream& operator <<(ostream&,Matrix&); 
friend istream& operator >>(istream&,Matrix&); 
private:
    int a[2][3],i,j;
};

Matrix::Matrix()
 { 	
 for( i=0;i<2;i++)
 for( j=0;j<3;j++)
 a[i][j]=0;
 } 
 
Matrix Matrix::operator +(Matrix& c2)
{Matrix c;
for(i=0;i<2;i++)
for(j=0;j<3;j++)
c.a[i][j]=a[i][j]+c2.a[i][j];
return c;
}
ostream& operator<<(ostream& output,Matrix &c2)
{
	int i,j;
for(i=0;i<2;i++){
	
for(j=0;j<3;j++)
{
output<<c2.a[i][j]<<'|';	
}
output<<'\n';

}
return output;
}
istream& operator>>(istream& input,Matrix &c2)
{
int i,j;
	  for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
     input>>c2.a[i][j];
}
return input;
}

int main()
{
    Matrix t1,t2,t3;
cin>>t1;
cout<<t1;
return 0;
}
