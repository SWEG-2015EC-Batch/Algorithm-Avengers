#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a charachter";
	cin>>ch;
	if(isalpha(ch))
	{
		if(islower(ch))
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
				cout<<"The entered character is a lowercase vowel alphabet.";
			}
			else
			{
				cout<<"The entered character is a lowercase constant alphabet.";
			}
		}
		else 
		{
			if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			{
				cout<<"The entered character is an uppercase vowel alphabet.";
			}
			else
			{
				cout<<"The entered character is an uppercase consonant alphabet";
			}
		}
	}
	else if(isdigit(ch))
	{
		if(ch%2==0)
		{
			cout<<"The entered character is an even digit";
	    }
	    else
	    {
	    	cout<<"The entered character is an odd digit";
		}
	}
	else
	{
		cout<<"The entered character is a special caracter";
	}
	return 0;
}

