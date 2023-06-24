#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool comparator(int a, int b){
	return a%10 < b%10;
}
int main(){
	// char arr[] = "edcba";
	int arr[] = {10, 9, 8, 7, 16, 31, 22};
	// int n = strlen(arr);
	int n = sizeof(arr)/sizeof(arr[0]);
	// sort(arr, arr+n, comparator);
	// sort(arr, arr+n, greater<int>());
	reverse(arr, arr+n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	// cout<<arr<<endl;


	return 0;
}