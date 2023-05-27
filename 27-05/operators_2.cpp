#include<iostream>
using namespace std;
int main(){
	int i = 1, n = 10;
	while(i <= n){
		cout<<i<<" ";
		// i = i + 1;
		i *= 2;
	}
	cout<<endl;
	int a = 10;
	cout<<++a<<endl; 
	cout<<a<<endl;
	return 0;
}