#include<iostream>
using namespace std;
int main()
{
 float weight, height, height_squared, BMI;
 cout<<" Enter weight ";
 cin>>weight;
 cout<<" Enter height ";
 cin>>height;
 height_squared= height*height;
 cout<<"height_squerd = "<<height_squared;
 BMI=weight/height_squared;
 cout<<" BMI of the person = "<<BMI;
 return 0;
}