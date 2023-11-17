#include<iostream.h>
int main()
{
 float employee_name, weekly_working_hours, bonus_rate, base_salary, gross_salary, bonus_payment, net_salary;
 cout<<" Enter base salary ";
 cin>>base_salary;
 cout<< " Enter weekly working hours ";
 cin>>weekly_working_hours;
 cout<<" Enter bonus rate per hour ";
 cin>>bonus_rate;
 gross_salary=base_salary+(weekly_working_hours*bonus_rate);
 cout<<" gross salary = "<<gross_salary;
 net_salary=gross_salary*0.80;
 cout<<"\n net salary = "<<net_salary;
 bonus_payment= weekly_working_hours*bonus_rate;
 cout<<"\n bonus payment = "<<bonus_payment;
}