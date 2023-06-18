#include<iostream>
using namespace std;
void take_input(int a, int b, int c = 4, int d = 5){
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
}
int main(){
	take_input(1, 2, 4, 3);
	return 0;
}