#include<iostream>
using namespace std;
void print(int arr[], int n){
	// cout<<sizeof(arr)<<endl;
	for(int i = 0; i < n; i++){
		cout<<*(arr+i)<<" ";
	}
	int b = 13;
	arr = &b;
	cout<<endl;
}
int main(){
	int arr[] = {0, 1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	// cout<<&arr[0]<<endl;
	// cout<<&arr[1]<<endl;
	// cout<<&arr[2]<<endl;
	// print(arr, n);
	cout<<arr<<endl;
	cout<<arr+1<<endl; // address of a single int bucket
	cout<<&arr+1<<endl; // address of the entire array
	return 0;
}