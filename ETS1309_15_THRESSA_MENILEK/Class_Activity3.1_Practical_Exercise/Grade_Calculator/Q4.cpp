#include<iostream>
using namespace std;
int main()
{
	float test, quiz, project, assignment, finalExam, totalMark;
	cout<<"Enter the mark for test out of 15: ";
	cin>>test;
	cout<<"Enter the mark for quiz out of 5: ";
	cin>>quiz;
	cout<<"Enter the mark for project out of 20: ";
	cin>>project;
	cout<<"Enter the mark for assignment out of 10: ";
	cin>>assignment;
	cout<<"Enter the mark for final exam out of 50: ";
	cin>>finalExam;
	totalMark = test + quiz + project + assignment + finalExam;
	cout<<"Your total mark: "<<totalMark<<endl;
	if(totalMark>=90)
	{
		cout<<"Your corresponding letter grade: A+";
	}
	else if(totalMark>=80)
	{
		cout<<"Your corresponding letter grade: A";
	}
	else if(totalMark>=75)
	{
		cout<<"Your corresponding letter grade: B+";
	}
	else if(totalMark>=60)
	{
		cout<<"Your corresponding letter grade: B";
	}
	else if(totalMark>=55)
	{
		cout<<"Your corresponding letter grade: C+";
	}
	else if(totalMark>=45)
	{
		cout<<"Your corresponding letter grade: C";
	}
	else if(totalMark>=30)
	{
		cout<<"Your corresponding letter grade: D";
	}
	else
	{
		cout<<"Your corresponding letter grade: F";
	}
	return 0;
}
