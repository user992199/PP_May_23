#include<iostream>
using namespace std;
int main(){
	int n = 5;
	// ol : 1 -> n
	for(int i = 1; i <= n; i++){
		// l1 : 1 -> i
		for(int j = 1; j <= i; j++){
			cout<<'*';
		}
		cout<<' ';
		// l2 : 1 -> n - i + 1
		for(int j = 1; j <= n - i + 1; j++){
			cout<<'*';
		}
		cout<<' ';
		// l3 : 1 -> n - i + 1
		for(int j = 1; j <= n - i + 1; j++){
			cout<<'*';
		}
		cout<<' ';
		// l4 : 1 -> i
		for(int j = 1; j <= i; j++){
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}