#include<iostream>
using namespace std;
void func(int k){
	int t = k/2;
	k += 10;
	cout<<k<<" "<<t<<endl;
}

int main(){
	int k = 13;
	func(k);
	cout<<"main: "<<k<<endl;
	// cout<<t<<endl;
	return 0;
}