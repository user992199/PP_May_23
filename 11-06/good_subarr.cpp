#include<iostream>
using namespace std;
int good_subarr(int arr[], int n){
	int csum[n], freq[100] = {1};
	csum[0] = (arr[0]%n + n) % n;
	for(int i = 0; i < n; i++){
		csum[i] = (csum[i-1] + arr[i]) % n;
		csum[i] = (csum[i] + n) % n;
	}
	for(int i = 0; i < n; i++){
		freq[csum[i]]++;
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += freq[i] * (freq[i] - 1) / 2;
	}
	return ans;
}
int main(){
	int arr[] = {3, 1, 2, 4, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<good_subarr(arr, n)<<endl;
	return 0;
}