#include<iostream>
using namespace std;
int main(){
	int n = 15;
	int ans = 0;
	int check = 1;
	for(int i = 1; i <= 32; check <<= 1, i++){
		if((n & check)!=0){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}