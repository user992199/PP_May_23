#include<iostream>
using namespace std;
void print(int arr[], int n){
	// int k = sizeof(arr); // this will not work correctly
	for(int i = 0; i < n; i++){
		cout<<++arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}