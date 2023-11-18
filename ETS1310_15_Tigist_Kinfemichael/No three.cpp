#include<iostream.h>
int main()
{
char ch;
  cout<<"enter any alphabet";
  cin>>ch;
  if(ch>='a' && ch<='z')
  {
    cout<<"the entered alphabet is in lowercase";
    ch=ch-32;
    cout<<"uppercase is"<<ch;
  }
  else
{ 
    cout<<"the entered alphabet is in uppercase";
    ch=ch+32;
    cout<<"lowercase is"<<ch;
  }
  return 0;
}
