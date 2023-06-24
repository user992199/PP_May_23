#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string int_to_string(int n){
	string ans;
	while(n){
		ans.push_back((n % 10) + '0');
		n /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}
int main(){
	int n = 1024;
	cout<<int_to_string(n)<<endl;
	return 0;
}