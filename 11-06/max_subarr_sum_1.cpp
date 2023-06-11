#include<iostream>
using namespace std;
int sum_subarr(int arr[], int s, int e){
	int sum = 0;
	for(int i = s; i <= e; i++){
		sum += arr[i];
	}
	return sum;
}
int max_sub_sum(int arr[], int n){
	int ans = INT_MIN;
	for(int s = 0; s < n; s++){
		for(int e = s; e < n; e++){
			int curr_sum = sum_subarr(arr, s, e);
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