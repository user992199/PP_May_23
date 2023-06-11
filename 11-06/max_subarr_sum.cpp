#include<iostream>
using namespace std;
void print_subarr(int arr[], int s, int e){
	for(int i = s; i <= e; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void print_all_sub(int arr[], int n){
	cout<<"\n";
	for(int s = 0; s < n; s++){
		for(int e = s; e < n; e++){
			print_subarr(arr, s, e);
		}
	}
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	print_all_sub(arr, n);
	return 0;
}