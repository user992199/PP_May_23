#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int le = arr[n-1];
	for(int i = n-2; i >= 0; i--){
		arr[i+1] = arr[i];
	}
	arr[0] = le;

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}