#include <iostream>
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

  string arr[1000]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  int n;
  cin>>n;
  int x=countdigit(n);
  if(x>3)
  {
      cout<<"Error";
  }
  else 
  {
      for(int i=0;i<3;i++)
      {
         int d=n/100;
         n=(n-(d*100))*10;
         cout<<arr[d]<<' ';
      }
  }

return 0;
}
