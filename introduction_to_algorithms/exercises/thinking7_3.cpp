#include<iostream>

using namespace std;
int a[100]={0};

void stooge_sort(int i,int j)
{
  int t=0;
  if (a[i]>a[j])
    {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
    }

  if (i+1>=j)
    return;

  int k=(j-i+1)/3;

  stooge_sort(i,j-k);
  stooge_sort(i+k,j);
  stooge_sort(i,j-k);
}

int main(void)
{
  int n;
  cin >> n;

  for (int i=1;i<=n;i++)
    {
      cin >> a[i];
    }

  stooge_sort(1,n);

  for (int i=1;i<=n;i++)
    {
      cout << a[i] << " ";
    }

  cout << endl;

  return 0;
}
