#include<iostream>
using namespace std;
void search(int arr[][100], int m, int n, int key){
	int row = 0, col = n-1;
	while(row < m and col >= 0){
		// cout<<arr[row][col]<<" ";
		if(arr[row][col] == key){
			cout<<row<<" "<<col<<endl;
			return;
		}else if(key > arr[row][col]){
			row++;
		}
		else if(key < arr[row][col]){
			col--;
		}
	}
	cout<<"Key not found\n";
}

int main(){
	int arr[100][100] = {
		{1, 3, 5, 7},
		{8, 10, 15, 16},
		{9, 11, 17, 20}
	};
	int m = 3, n = 4;
	int key = 6;
	search(arr, m, n, key);
	return 0;
}