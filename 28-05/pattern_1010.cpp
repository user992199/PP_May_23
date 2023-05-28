// 1
// 01
// 101
#include<iostream>
using namespace std;
int main(){
	int n = 5;
	for(int i = 1; i <= n; i++){
		int num = i % 2;
		for(int j = 1; j <= i; j++){
			cout<<num<<" ";
			num = 1 - num;
		}
		cout<<endl;
	}
	return 0;
}