#include <iostream>
using namespace std;


class Shop{
	public:
Shop(float p,int q):price(p),quantity(q){	}
  	void  total();		
    static float average();
    private: 
    float price;
   	int  quantity;
    static float sum;
    static int count;
};

void Shop::total(){	
if(quantity>10)
price*=0.98;
sum+=price*quantity;
count+=quantity;	
}
float Shop::average(){
 return (sum/count);	
}
float Shop::sum=0;
int Shop::count=0;
int main(){
Shop s1(23.5,5);
Shop s2(24.56,12);
Shop s3(21.5,100);
s1.total();
s2.total();
s3.total();
cout<<"average:"<< Shop::average()<<endl;
	
	return 0;
}