#include<iostream>

using namespace std;

void extended_eculids(int m, int n)
{
  int a,a1,b,b1,c,d,q,r,t;

  a1=b=1;
  a=b1=0;
  
  c=m;
  d=n;
  r=c%d;
  q=(c-r)/d;

  while (r!=0)
    {
      c=d;
      d=r;
      t=a1;
      a1=a;
      a=t-q*a;
      t=b1;
      b1=b;
      b=t-q*b;

      r=c%d;
      q=(c-r)/d;
    }

  cout << a << "*" << m << "+" << b << "*" << n << "=" << d << endl;

}

int main(void)
{
  int m,n;

  cin >> m >> n;

  extended_eculids(m,n);

  return 0;
}
