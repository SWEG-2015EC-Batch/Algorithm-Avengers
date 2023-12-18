
// exercise 1 net salary calculator

#include<iostream>
using namespace std;
int main()
{
 float grossSalary, bonusRate, workedHrs,taxRate, incomeTax, pension, netSalary, bonusPay;
 cout<<" enter gross salary ";
 cin>>grossSalary;
 cout<<" enter worked hours ";
 cin>>workedHrs;
 cout<<" enter bonus rate ";
 cin>>bonusRate;
 if(workedHrs>40){
  bonusPay= bonusRate*(workedHrs-40);
 }
 else{ 
 bonusPay=0;
 }
 if(grossSalary<200){
  taxRate=0.00;
 }
 else if(200<grossSalary<600){
  taxRate=0.1;
 }
 else if(600<grossSalary<1200){
   taxRate=015;
  }
 else if(1200<grossSalary<2000){
  taxRate=0.2;
 }
 else if (2000<grossSalary<3500){
  taxRate=0.25;
 }
 else{
  taxRate=0.35;
 }
 incomeTax=taxRate*grossSalary;
 pension=grossSalary*0.07;
 netSalary=(grossSalary-incomeTax-pension)+bonusPay;
 cout<<" net salary: "<<netSalary;
}