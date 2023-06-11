#include<iostream>
using namespace std;
int sum_subarr(int csum[], int s, int e){
	// if(s == 0)
	// 	return csum[e];
	// else{
	// 	return csum[e] - csum[s-1];
	// }
	return s==0 ? csum[e] : csum[e] - csum[s-1];
}
int max_sub_sum(int arr[], int n){
	int csum[n];
	csum[0] = arr[0];
	for(int i = 1; i < n; i++){
		csum[i] = arr[i] + csum[i-1];
	}
	int ans = INT_MIN;
	for(int s = 0; s < n; s++){
		for(int e = s; e < n; e++){
			int curr_sum = sum_subarr(csum, s, e);
			if(curr_sum > ans){
				ans = curr_sum;
			}
		}
	}
	return ans;
}
int main(){
	int arr[] = {1, -2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<max_sub_sum(arr, n)<<endl;
	return 0;
}