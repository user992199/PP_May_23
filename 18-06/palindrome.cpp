#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(char * arr){
	int n = strlen(arr);
	for(int i = 0, j = n - 1; i < j; i++, j--){
		if(arr[i] != arr[j]){
			return false;
		}
	}
	return true;
}
int main(){
	char arr[] = "r";
	palindrome(arr) ? cout<<"Yes\n" : cout<<"No\n";
	return 0;
}