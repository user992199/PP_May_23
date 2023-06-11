#include<iostream>
using namespace std;
int factorial(int n){
	int ans = 1;
	for(int i = 2; i <= n; i++){
		ans *= i;
	}
	return ans;
}
int nCr(int n, int r){
	return factorial(n) / ( factorial(r) * factorial(n-r) );
}
int main(){
	cout<<nCr(5, 3)<<endl;
	return 0;
}