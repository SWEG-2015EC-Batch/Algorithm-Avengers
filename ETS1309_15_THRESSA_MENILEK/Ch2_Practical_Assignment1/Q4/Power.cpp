#include <iostream>
using namespace std;
int main()
{
 int num;
 int power;
 cout<<"enter number:";
 cin>>num;
 cout<<"enter power:";
 cin>>power;
 int product=1;
 for(int i=1;i<=power;i++)
      product=product*num;
  cout<<num<<"pow"<<power<<"="<<product;
  return 0;
}
