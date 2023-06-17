#include<iostream>
using namespace std;
int main(){
	char ch = 'b';
	char * ptr = &ch;
	cout<<ch<<endl;
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	// fooling of compiler
	cout<<(bool *)&ch<<endl;
	int a = 19;
	cout<<(char*)&a<<endl;
	return 0;
}