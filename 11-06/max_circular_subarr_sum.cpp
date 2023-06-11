#include<iostream>
using namespace std;
int kadanes(int arr[], int n){
	int curr_sum = 0, ans = INT_MIN;
	for(int i = 0; i < n; i++){
		curr_sum += arr[i];
		ans = max(curr_sum, ans);
		curr_sum = max(0, curr_sum);
	}
	return ans;
}
int max_cir_sub_sum(int arr[], int n){
	int op1 = kadanes(arr, n);
	int total_sum = 0;
	for(int i = 0; i < n; i++){
		total_sum += arr[i];
		arr[i] *= -1;
	}
	int op2 = total_sum + kadanes(arr, n);
	return max(op1, op2);
}
int main(){
	int arr[] = {3, -4, 2, 8, -3, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<max_cir_sub_sum(arr, n)<<endl;
	return 0;
}