#include<iostream>
#include<cmath>

using namespace std;
int a[100]={0};
int n=0;

bool check(void)
{
	for (int i=2;i<=n;i++)
	{
		if (a[i]!=a[1])
			return 0;
	}
	
	return 1;
}

int partition(int p, int r)
{
	if (check()==1)
	{
		return (p+r)/2;
	}

	int x=a[r];
	int i=p-1;
	int t=0;
	
	for (int j=p;j<=r-1;j++)
	{
		if (a[j]<=x)
		{
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	
	t=a[i+1];
	a[i+1]=a[r];
	a[r]=t;

	return i+1;
}

int radomized_partition(int p,int r)
{
	int i=rand()%(r-p+1)+p;

	int t;
	t=a[r];
	a[r]=a[i];
	a[i]=t;

	return partition(p,r);
}

void quicksort(int p, int r)
{
	int q=0;
	if (p<r)
	{
		q=radomized_partition(p,r);
		quicksort(p,q-1);
		quicksort(q,r);
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