#include<iostream>
using namespace std;
int main(){
	int arr[] = {6, 5, 4, 3, -10, 100000, -27846, 8237, 123976, 2, 1, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i = 0; i <= n-2; i++){
		for(int j = 0; j <= n-2-i; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}