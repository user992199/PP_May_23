#include<iostream>
using namespace std;
void func(int* x){
	*x++;
}
int main(){
	int x = 10;
	// int * ptr = &x;
	func(&x);
	cout<<x<<endl;
	return 0;
}