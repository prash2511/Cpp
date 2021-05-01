#include<iostream>
using namespace std;

int main()
{
	int age = 19;
	int *pAge = &age;					//pointer
	
	double gpa = 8.3;
	double *pGpa = &gpa;
	
	string name = "Prashant";
	string *pName = &name;
	
	
	cout<<pAge<<endl;					//gives address
	cout<<*pAge<<endl;					//Dereferencing of value
	
	cout<<&gpa<<endl;
	cout<<*&gpa;						//Dereferencing
	
	return 0;
}
