#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int A = 6;
	int B = 4;
	
	cout<<"Addition of "<<A<<" and "<<B<<" is: "<<A + B<<endl;
	cout<<"Subtraction of "<<A<<" and "<<B<<" is: "<<A - B<<endl;
	cout<<"Multiplication of "<<A<<" and "<<B<<" is: "<<A * B<<endl;
	cout<<"Division of "<<A<<" and "<<B<<" is: "<<A / B<<endl;
	cout<<"Remeinder of "<<A<<" and "<<B<<" is: "<<A % B<<endl;

    int wnum = 5;
    wnum++;
    
    cout<<wnum++<<endl;
	cout<<--wnum<<endl;
	
	cout<<10 / 3<<endl;
	cout<<10.0 / 3.0<<endl;
	
	
	cout<<pow(5,3)<<endl;
	cout<<sqrt(81)<<endl;
	cout<<round(4.4)<<endl;
	cout<<round(4.7)<<endl;
	cout<<ceil(4.3)<<endl;
	cout<<floor(4.8)<<endl;
    cout<<fmax(3,8)<<endl;
    cout<<fmin(3,8)<<endl;
    
	
	return 0;
}
