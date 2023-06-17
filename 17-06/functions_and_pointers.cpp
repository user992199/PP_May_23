#include<iostream>
using namespace std;
void print(int * ptr){
	*ptr += 10;
	// cout<<*ptr<<endl;
	int b = -10;
	ptr = &b;
}
int main(){
	int a = 10;
	int * ptr = &a;
	print(&a);
	// cout<<a<<endl;
	cout<<*ptr<<endl;
	return 0;
}