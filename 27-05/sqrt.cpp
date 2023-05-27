#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 0;
	while(i * i <= n){
		// if(i * i == n){
		// 	cout<<i<<endl;
		// }
		i = i + 1;
	}
	cout<<i-1<<endl;
	cin>>i;
	return 0;
}