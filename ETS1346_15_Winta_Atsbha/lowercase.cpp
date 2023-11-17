#include <iostream>
using namespace std;
int main()
{
char ch;
  cout<<"enter any alphabet";
  cin>>ch;
  if(ch>='a' && ch<='z')
  {
    cout<<"\nthe entered alphabet is in lowercase";
    ch=ch-32;
    cout<<"\nuppercase is"<<ch;
  }
  else
  {
    cout<<"\nthe entered alphabet is in uppercase";
    ch=ch+32;
    cout<<"\nlowercase is"<<ch;
  }
  return 0;
  }