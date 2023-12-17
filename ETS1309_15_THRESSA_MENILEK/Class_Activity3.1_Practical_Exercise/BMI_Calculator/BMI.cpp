#include <iostream>
using namespace std;
int main()
{
  float Weight, Height, BMI;
  cout<<"enter Weight";
  cin>>Weight;
  cout<<"enter Height";
  cin>>Height;
  BMI = Weight/(Height * Height);
  cout<<"The BMI of a body is"<<BMI;
  return 0;
}
