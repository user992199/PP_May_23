#include<iostream>
using namespace std;
int main(){
	int n = 12;
	int k = 3;

	int x = 1 << (k-1);

	if((n & x) != 0){
		cout<<1<<endl;
	}else{
		cout<<0<<endl;
	}

	n >>= k - 1;
	int bit = n & 1;
	cout<<bit<<endl;
	// cout<<((n >> (k-1))&1)<<endl;
	return 0;
}