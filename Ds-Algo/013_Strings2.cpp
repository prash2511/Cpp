#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string s1 = "abc";
	string s2 = "abc";
	
	//string compare
	if(!s2.compare(s1))
	{
		cout<<"Strings are equal"<<endl;
	}	
	
	//string clear
	//string empty
	s1.clear();
	if(s1.empty());
	{
		cout<<"String is empty"<<endl;
	}
	
	if(!s2.empty())
	{
		cout<<"String is not empty"<<endl;
	}
	
	
	string s3 = "nincompoop";
	
	//string find
	cout<<s3.find("com")<<endl;
	
	//string erase
	s3.erase(4, 3);
	cout<<s3<<endl;
	
	//string insert
	cout<<s3.insert(3, "lol")<<endl;
	
	//string length/size
	cout<<s3.length()<<endl;
	cout<<s3.size()<<endl;
	
	//string sub string
	string sub = s3.substr(3, 5);
	cout<<sub<<endl;
	
	//string to int
	string s4 = "7218";
	int x = stoi(s4);
	cout<<x+10<<endl;
	
	//int to string
	string s5 = to_string(x);
	cout<<s5+'5'<<endl;
	
	//string sort
	string s6 = "prashant";
	sort(s6.begin(), s6.end());
	cout<<s6<<endl;	
	
	return 0;
}
