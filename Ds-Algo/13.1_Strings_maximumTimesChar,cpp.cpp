#include<iostream>
using namespace std;

int main()
{
	string s = "abcacbade";
	
	int freq[26];
	for(int i=0; i<26; i++)
	{
		freq[i] = 0;
	}
	
	for(int i=0; i<s.size(); i++)
	{
		freq[s[i] - 'a']++;
	}
	
	char ans = 'a';
	int maxx = INT_MIN;
	
	for(int i=0; i<26; i++)
	{
		if(freq[i] > maxx)
		{
			maxx = freq[i];
			ans = i+'a';
		}
	}
	
	cout<<"Character: "<<ans<<endl;
	cout<<"Frequency: "<<maxx;
	
	
	return 0;
}
