#include<iostream>
using namespace std;
void wave(int arr[][100], int m, int n){
	for(int i = 0; i < n; i++){
		if(i % 2){
			for(int j = m-1; j >= 0; j--){
				cout<<arr[j][i]<<" ";
			}
		}else{
			for(int j = 0; j < m; j++){
				cout<<arr[j][i]<<" ";
			}
		}
		// cout<<endl;
	}
	cout<<endl;
}
void init_2d_arr(int arr[][100], int m, int n){
	int val = 1;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = val++;
		}
	}
}
int main(){
	int arr[100][100];
	int m = 5, n = 5;
	init_2d_arr(arr, m, n);
	wave(arr, m, n);
	return 0;
}