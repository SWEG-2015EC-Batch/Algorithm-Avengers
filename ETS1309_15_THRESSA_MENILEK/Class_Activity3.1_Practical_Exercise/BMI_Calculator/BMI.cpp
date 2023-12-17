#include<iostream.h>
int main()
{
	float weight, height, BMI;
	char gender= 'f' ; 'm';
	cout<<" enter weight ";
	cin>>weight;
	cout<<" enter height ";
	cin>>height;
	BMI= weight/(height*height);
	cout<< " BMI of a  person = "<<BMI;
	cout<<" enter gender ";
	cin>> gender;
	cout<<" your gender is "<<gender;
	{
	if('f')
	{
		if(BMI<18.5)
		{
		cout<<" under weight ";
	}
	    else if (BMI>=18.5 && BMI<24)
	    {
	    cout<<" normal weight ";
	    }
	    else if (BMI>=24 && BMI<30)
	    {
	    cout<<" over weight ";
	    }
	    else if (BMI>=30)
	    cout<<" obese ";
	}
	}
   {
	   if('m')
   {
	   if(BMI<20.5)
	   cout<<" under weight ";
   }
	   else if(BMI>=20.5 && BMI<25)
	   {
	   cout<<" normal weight ";
	   }
	   else if(BMI>=25 && BMI<30)
	   {
	   cout<<" over weight ";
	   }
	   else if(BMI>=30)
	   cout<<" obese ";
   
	}
}
