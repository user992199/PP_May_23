#include<iostream>
using namespace std;
bool check_prime(int n){
	for(int i = 2; i < n; i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}
void print_prime_till_n(int n){
	for(int i = 2; i <= n; i++){
		if(check_prime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int n = 100;
	print_prime_till_n(n);
	return 0;
}