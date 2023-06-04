#include<iostream>
using namespace std;
int main(){
	int arr[] = {6, 5, 4, 3, -10, 10, -27, 82, 12, 2, 1, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	for(int i = 0; i < n-1; i++){
		int min_index = i;
		for(int j = i+1; j < n; j++){
			if(arr[min_index] > arr[j]){
				min_index = j;
			}
		}
		swap(arr[min_index], arr[i]);
	}

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}