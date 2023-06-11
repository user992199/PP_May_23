#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void inverse(int arr[], int n){
	int inverse[10];
	for(int i = 0; i < n; i++){
		inverse[arr[i]] = i;
	}
	for(int i = 0; i < n; i++){
		arr[i] = inverse[i];
	}
}
int main(){
	int arr[] = {0, 1, 4, 3, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	inverse(arr, n);
	print(arr, n);
	return 0;
}