#include<iostream>
using namespace std;
int main(){
	int a = 10;
	cout<<&a<<endl;
	int * aptr = &a;
	cout<<aptr<<endl;
	cout<<++(*aptr)<<endl;
	cout<<a<<endl;
	return 0;
}