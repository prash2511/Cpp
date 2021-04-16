#include<iostream>

using namespace std;

int n;

void sayHi(string name, int age)
{
	cout<<"Hello "<<name<<" You are "<<age<<" years old."<<endl;
}


void addition(int a, int b)
{
	int add = a + b;
	cout<<add<<endl;
}


int square(int n)
{
	int sqr;
	sqr = n * n;
	return sqr;
}


int main()
{	
	int add, sqr;
	
	sayHi("Prashant", 21);
	
	addition(3, 6);

	sqr = square(9);
	cout<<sqr;
	
	return 0;
}



