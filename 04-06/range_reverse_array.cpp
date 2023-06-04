#include<iostream>
using namespace std;
int main(){
	int arr[20];
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		arr[i] = i+1;
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int s = 7, e = 13;

	for(int i = s, j = e; i < j; i++, j--){
		swap(arr[i], arr[j]);
	}
	
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}