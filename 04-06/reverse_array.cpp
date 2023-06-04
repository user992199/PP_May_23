#include<iostream>
using namespace std;
int main(){
	int arr[] = {6, 5, 4, 3, 2, 1, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	// int temp[n];
	// for(int i = 0, j = n-1; i < n; i++, j--){
	// 	temp[j] = arr[i];
	// }
	// for(int i = 0; i < n; i++){
	// 	arr[i] = temp[i];
	// }

	for(int i = 0, j = n-1; i < j; i++, j--){
		swap(arr[i], arr[j]);
	}
	
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}