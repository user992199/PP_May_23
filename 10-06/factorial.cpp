#include<iostream>
using namespace std;
int factorial(int n){
	int ans = 1;
	for(int i = 2; i <= n; i++){
		ans *= i;
	}
	return ans;
}
int main(){
	for(int i = 0; i < 20; i++) 
		cout<<i<<" "<<factorial(i)<<endl;
	return 0;
}