#include<iostream>
using namespace std;
void search(int arr[][1000], int m, int n, int key){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] == key){
				cout<<i+1<<" "<<j+1<<endl;
				return;
			}
		}
	}
}
void init_2d_arr(int arr[][1000], int m, int n){
	int val = 1;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = val++;
		}
	}
}
int main(){
	int arr[100][1000];
	// cout<<"EOP";
	int m = 5, n = 4;
	init_2d_arr(arr, m, n);
	int key = 17;
	// cout<<"EOP\n";
	search(arr, m, n, key);
	return 0;
}