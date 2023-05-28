#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans = 0;
	for(int i = 1; i <= n; i++){
		int input;
		cin>>input;
		ans ^= input;
	}n
	cout<<ans<<endl;
	cin>>n;
	return 0;
}