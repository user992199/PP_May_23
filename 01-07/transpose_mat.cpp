#include<iostream>
using namespace std;
void transpose(int arr[][100], int &m, int &n){
	for(int i = 0; i < m; i++){
		for(int j = i+1; j < n; j++){
			swap(arr[i][j], arr[j][i]);
		}
	}
	swap(m, n);
}
void init_2d_arr(int arr[][100], int m, int n){
	int val = 1;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = val++;
		}
	}
}
void print(int arr[][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
}
int main(){
	int arr[100][100];
	int m = 5, n = 7;
	init_2d_arr(arr, m, n);
	print(arr, m, n);
	transpose(arr, m, n);
	print(arr, m, n);
	return 0;
}