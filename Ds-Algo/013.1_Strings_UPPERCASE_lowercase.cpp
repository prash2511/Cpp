#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string str = "prashant";
	
	//convert to UPPERCASE
	
	for(int i=0; i<str.size(); i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	cout<<str<<endl;	
	
	string str1 = "GALGUNDE";
	
	
	//convert to lowercase

	for(int i=0; i<str1.size(); i++)
	{
		if(str[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] += 32;
		}
	}
	cout<<str1<<endl;
	
	
	//convert to UPPERCASE
	
	string s = "Prash";
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout<<s<<endl;
	
	
	//convert to lowercase
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout<<s<<endl;

	
	
	return 0;
}
