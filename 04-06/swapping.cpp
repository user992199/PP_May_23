#include<iostream>
using namespace std;
int main(){
	int a = 10, b = 17;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<endl;
	// Method 1
	// int temp = a;
	// a = b;
	// b = temp;
	// Method 2
	// a = a + b;
	// b = a - b;
	// a = a - b;
	// Method 3
	// a = (a+b) - (b=a);
	// Inbuilt Function
	swap(a, b);
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	return 0;
}