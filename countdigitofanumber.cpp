#include<iostream>
using namespace std;
int countdigit(int n)
{
    int count;
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    return count;
}

int main()
{
  int n;
  cin>>n;
  cout<<countdigits(n);
  
  return 0;
}
