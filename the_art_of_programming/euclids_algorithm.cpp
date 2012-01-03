#include<iostream>

using namespace std;

int euclid(int m, int n)
{
	int r=0;
	if (m<n)
	{
		r=m;
		m=n;
		n=r;
	}
	
	r=m%n;
	while (r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}

	return n;
}
int main(void)
{
	int m,n;

	cin >> m >> n;
	
	cout << euclid(m,n) << endl;
	
	return 0;
}