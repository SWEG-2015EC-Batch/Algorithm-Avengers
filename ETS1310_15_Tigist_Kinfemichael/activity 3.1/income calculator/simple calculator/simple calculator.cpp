#include <iostream>
using namespace std;
int main()
 {
   int operand1,operand2,sum,difference,product,quotient,remainder;
   char operation;
   do{
   cout<<"\n Enter first number (0 to end) ";
   cin>>operand1;
   cout<<" Enter operator ";
   cin>>operation;
   cout<<" Enter second number (0 to end) ";
   cin>>operand2;
   switch(operation){
   case '+':
     sum=operand1+operand2;
     cout<<" sum of the two operands is= "<<sum;
     break;
    case '-':
      difference=operand1-operand2;
      cout<<" difference of the two operands is= "<<difference;
      break;
    case '*':
      product=operand1*operand2;
      cout<<" product of the two operands is= "<<product;
      break;
    case '/':
      quotient=operand1/operand2;
      cout<<" quotient of the two operands is= "<<quotient;
      break;
    case '%':
      remainder=operand1%operand2;
      cout<<" remainder of the two operands is="<<remainder;
      break;
      default: cout<<" unknown operator: ";
      break;
    }
 }while(operand1&&operand2!=0);
 }
