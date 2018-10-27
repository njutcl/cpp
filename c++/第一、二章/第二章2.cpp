#include <iostream>
using namespace std;
class Time
	{
	public:
void set_Time()
{
	cin>>hour;
	cin>>minute;
	cin>>sec;
}
void show_time()
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
private:
int hour;
int minute;
int sec;
};
int main()
{
	Time t1;
	t1.set_Time();
	t1.show_time();
	return 0;
} 