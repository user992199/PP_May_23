#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(string a, string b){
	return a+b >= b+a;
}
void fbn(string s[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(compare(s[j+1], s[j])){
				swap(s[j], s[j+1]);
			}
		}
	}
}
int main(){
	string s[] = {"45", "62", "67", "7", "6", "9", "91"};
	int n = sizeof(s)/sizeof(s[0]);
	// cout<<n<<endl;
	// sort(s, s+n, compare);
	fbn(s, n);
	for(int i = 0; i < n; i++){
		cout<<s[i];
	}cout<<endl;
	return 0;
}