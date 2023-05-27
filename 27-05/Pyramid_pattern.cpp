#include<iostream>
using namespace std;
int main(){
	int n = 5;
	int i = 1;
	while(i <= n){
		int j = 1;
		while(j <= n-i){
			cout<<"  ";
			j = j+1;
		}
		j = 1;
		int num = i;
		while(j <= i){
			cout<<num<<" ";
			j = j + 1;
			num = num + 1;
		}
		j = 2 * (i-1);
		while(j >= i){
			cout<<j<<" ";
			j = j - 1;
		}
		cout<<endl;
		i = i + 1;
	}
	return 0;
}