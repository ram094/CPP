#include <iostream>
#include "string"

using namespace std;

int main()
{
string str = "i am hungry.";

for(int i=0 ; i < str.length(); i++)
{
  if(str[i] == 'i')
  {
    str[i] = 'I';
  }
  cout<< str[i]; //print the letter in the string
}
cout<<"\n";
return 0;
}
