#include<iostream>
using namespace std;
int main(){
	int a = 10, b = 7;
	int * i = &a, *c = &b;

	// cout<<&a<<endl;
	// cout<<i-1<<endl;
	// cout<<i<<endl;
	// cout<<i+1<<endl;
	cout<<i<<endl;
	cout<<c<<endl;
	cout<<i-c<<endl;
	// cout<<i+2<<endl;
	// cout<<i+i<<endl;
	return 0;
}