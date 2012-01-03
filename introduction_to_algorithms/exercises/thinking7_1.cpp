#include<iostream>
#include<cmath>

using namespace std;
int a[100]={0};
int n=0;

int partition(int p, int r)
{
	int x=a[p];
	int i=p-1;
	int j=r+1;
	int y;
	
	while (true)
	{
		do
		{
			j--;
		}while(a[j]>x);
		do
		{
			i++;
		}while(a[i]<x);
		
		if (i<j)
		{
			y=a[i];
			a[i]=a[j];
			a[j]=y;
		}
		else return j;
	}
}

void quicksort(int p, int r)
{
	int q=0;
	if (p<r)
	{
		q=partition(p,r);
		quicksort(p,q);
		quicksort(q+1,r);
		//notice here.
		//the way to divide array is important.
	}
}

int main(void)
{
	cin >> n;

	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}

	quicksort(1,n);

	for (int i=1;i<=n;i++)
	{
		cout << a[i] << " ";
	}

	cin >> n;

	return 0;
}