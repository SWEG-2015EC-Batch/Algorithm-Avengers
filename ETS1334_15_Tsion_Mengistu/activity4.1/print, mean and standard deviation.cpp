#include<iostream>
#include<cmath>
using namespace std;
int main(){
int count=0,n,average,sum=0,x,variance,standardDeviation,total=0;
cout<<"enter number of data to be computed ";
cin>>n;
for(;count<n;count++){
cout<<"enter data ";
cin>>x;
sum+=x;
total+=pow(x,2);
}
average=sum/n;
cout<<" \n the mean of the data is "<<average;
variance=(total/(n-1))-pow(average,2);
standardDeviation=sqrt(variance);
cout<<" \n the standard deviation is "<<standardDeviation;


return 0;
}

