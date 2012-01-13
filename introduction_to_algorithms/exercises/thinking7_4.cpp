#include<iostream>

using namespace std;
int a[100]={0};

int partition(int p, int r)
{
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

void new_quicksort(int p, int r)
{
  int q=0;
  while (p<r)
    {
      q=partition(p,r);
      new_quicksort(p,q-1);
      p=q+1;
    }
}

int main(void)
{
  int n;
  cin >> n;

  for (int i=1;i<=n;i++) 
    {
      cin >> a[i];
    }

  new_quicksort(1,n);

  for (int i=1;i<=n;i++)
    {
      cout << a[i] << " ";
    }

  cout << endl;

  return 0;
}
