#include<iostream>
using namespace std;
int main(){
	int arr[] = {6, 5, 4, 3, -10, 10, -27, 82, 12, 2, 1, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	for(int i = 1; i <= n-1; i++){
		for(int j = i; j >= 1; j--){
			// arr[j] < arr[j-1] ? swap(arr[j], arr[j-1]) : break;
			if(arr[j] < arr[j-1]){
				swap(arr[j], arr[j-1]);
			}else{
				break;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}