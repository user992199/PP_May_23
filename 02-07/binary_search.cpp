#include<iostream>
using namespace std;
int binary_search(int arr[], int n, int key){
	int s = 0, e = n - 1;
	while(s <= e){
		int m = s + (e-s)/2;
		if(key == arr[m]){
			return m;
		}
		else if(key > arr[m]){
			s = m+1;
		}
		else if(key < arr[m]){
			e = m-1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {2, 3, 5, 7, 8, 10, 11, 13, 17};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 15;
	cout<<binary_search(arr, n, key)<<endl;
	return 0;
}