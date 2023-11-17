#include <cctype>
#include <iostream>

using namespace std;
int main()
{
  char letter;
  cout<<"enter a character";
  cin>> letter;
  if(islower(letter))
  {
  char upper_case_letter = toupper(letter);
  cout<<"your upper case version is"<<upper_case_letter;
  }
  if(isupper(letter))
  {
  char lower_case_letter=tolower(letter);
  cout<<"your lower case version is" <<lower_case_letter;
  }
  else
  {
  return 0;
  }
  
 
}
