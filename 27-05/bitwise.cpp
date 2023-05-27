#include<iostream>
using namespace std;
int main(){
	int a = 3, b = 5;
	cout<<a<<" & "<<b<<": "<<(a&b)<<endl;
	cout<<a<<" | "<<b<<": "<<(a|b)<<endl;
	cout<<"~"<<a<<": "<<(~a)<<endl;
	cout<<a<<" << "<<b<<": "<<(a<<b)<<endl;
	cout<<96<<" >> "<<b<<": "<<(96>>b)<<endl;
	cout<<a<<" ^ "<<b<<": "<<(a^b)<<endl;
	return 0;
}