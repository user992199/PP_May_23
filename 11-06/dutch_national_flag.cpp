#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void dnf(int arr[], int n){
	for(int i = 0, z = 0, t = n-1; i <= t; ){
		if(arr[i] == 0){
			swap(arr[i], arr[z]);
			i++; z++;
		}
		else if(arr[i] == 1){
			i++;
		}
		else{
			swap(arr[i], arr[t]);
			t--;
		}
	}
}
int main(){
	int arr[] = {1, 2, 1, 2, 0, 0, 2, 0, 1, 0, 2, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	dnf(arr, n);
	print(arr, n);
	return 0;
}