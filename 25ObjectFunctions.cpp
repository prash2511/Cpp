#include<iostream>
using namespace std;


class Student
{
	
public:
	string name;
	string major;
	double gpa;
	
	Student(string aName, string aMajor, int aGpa)
	{
		name = aName;
		major = aMajor;
		gpa = aGpa;
	};
	
	
	bool hasHonors()
	{
		if(gpa >= 8.5)
		{
			return true;
		}
		return false;
	}
	
	
};


int main()
{
	Student student1("Prashant", "Science", 8.37);
	Student student2("Latif", "Commerce", 9.10);
	
	cout<<student1.hasHonors()<<endl;
	cout<<student2.hasHonors()<<endl;
	
	
	return 0;
}
