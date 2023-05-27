#include<iostream>
using namespace std;
int main(){
	int i = -66;
	cout<<i * 1.1<<endl; // implicit
	cout<<(unsigned int)(i * 1.1)<<endl;
	cout<<(char)(i * 1.1)<<endl;
	return 0;
}