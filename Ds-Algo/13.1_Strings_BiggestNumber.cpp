#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string str = "7218056696";
	
	sort(str.begin(), str.end(), greater<int>());
	cout<<str<<endl;
	
	
	return 0;
}
