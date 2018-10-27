#include <iostream>
using namespace std;
template <typename T>
void sort(T a[9])
{
	int i,j;
	T temp;
	for(i=0;i<8;i++){
	for(j=0;j<8-i;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j+1];
		a[j+1]=a[j];
		a[j]=temp;
	}
}
  	
} 
int main()
	{
	int a[9]={
		77,55,33,4,5,6,7,8,9
	};
	float b[9]={
		1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1
	};
	double c[9]={
		1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1
	};
	sort(a);
    sort(b);
    sort(c);
  cout<<a[1]<<endl; 
return 0;
}