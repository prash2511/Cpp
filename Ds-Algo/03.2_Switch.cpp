#include<iostream>

using namespace std;

int main()
{
	char ch;
	
	cout<<"Enter Character A: English, B: Hindi, C: German, D: Spanish, E: Nepali - "<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 'A':
			cout<<"Hello"<<endl;
			break;
			
		case 'B':
			cout<<"Namaste"<<endl;
			break;
			
		case 'C':
			cout<<"Hola"<<endl;
			break;
			
		case 'D':
			cout<<"Ciao"<<endl;
			break;
			
		case 'E':
			cout<<"Salut"<<endl;
			break;
			
		default:
			cout<<"I'm still learning more";
			
	}
	
	
	return 0;
}
