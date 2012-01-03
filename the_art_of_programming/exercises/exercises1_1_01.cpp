#include<iostream>

using namespace std;

int main(void)
{
	int a=0,b=0,c=0,d=0;

	cin >> a >> b >> c >> d;
	
	// the first way, you have to exchange 0 times.
	cout << b << c << d << a << endl;

	int t=0;
	t=a;
	a=b;
	b=t;
	
	t=b;
	b=c;
	c=t;
	
	t=c;
	c=d;
	d=t;
	//In this way, you have to exchange all varibles in 9 times.
	
	cout << a << b << c << d << endl;

	cin >> a;

	return 0;
}