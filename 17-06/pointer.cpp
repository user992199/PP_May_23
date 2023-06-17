#include<iostream>
using namespace std;
int main(){
	int a = 10;
	cout<<&a<<endl;
	// datatype * identifier;
	int * aptr = &a;
	cout<<aptr<<endl;
	return 0;
}