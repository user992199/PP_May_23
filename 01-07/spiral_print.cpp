#include<iostream>
using namespace std;
void spiral(int arr[][100], int m, int n){
	int fr = 0, fc = 0, lr = m-1, lc = n-1;
	while(fr <= lr and fc <= lc){
		// first row: fc -> lc
		for(int col = fc; col <= lc; col++)
			cout<<arr[fr][col]<<" ";
		fr++;
		// last col: fr -> lr
		for(int row = fr; row <= lr; row++)
			cout<<arr[row][lc]<<" ";
		lc--;
		// last row: lc -> fc
		for(int col = lc; col >= fc; col--)
			cout<<arr[lr][col]<<" ";
		lr--;
		// first col: lr -> fr
		for(int row = lr; row >= fr; row--)
			cout<<arr[row][fc]<<" ";
		fc++;
		cout<<endl;
	}
	// cout<<endl;
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
	int m = 5, n = 7;
	init_2d_arr(arr, m, n);
	spiral(arr, m, n);
	return 0;
}