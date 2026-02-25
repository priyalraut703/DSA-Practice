//factorial of number
#include <iostream>
using namespace std;
int main()
{
  long int fact(int);
  int x;
  int n;
  cout<<"Enter any integer number"<<endl;
  cin>>n;
  x=fact(n);
  cout<<"Value"<<n<<"\nFactorial="<<x;
}
long int fact(int n)
{
  long int value=1;
  if (n==1)
    return(value);
  else{
    for(int i=1;i<=n;++i)
      value=value*i;
      return(value);
  }
return 0;
}
