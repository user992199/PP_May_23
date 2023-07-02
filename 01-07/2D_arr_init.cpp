#include<iostream>
using namespace std;
int main(){
	// syntax
	// datatype identifier[number of rows][number of columns] = {{}, {}, {}};
	// 1st - simple
	// int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
	// 2nd - no first dimension
	// int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
	// 3rd - extra cols
	// int arr[][10] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
	// 4th - extra rows + cols
	// int arr[10][10] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
	// 5th - with nested {}
	// int arr[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};
	// 6th - mixed {}
	// int arr[4][2] = {{1, 2}, 3, 4, {5, 6}};
	int arr[10][10] = {
		{1, 2, 3, 4, 5},
		{11, 12, 13},
		{21, 22, 23, 24, 25, 26, 27},
		{31, 31, 33, 34, 35}
	};
	int rows = sizeof(arr)/sizeof(arr[0]); // arr[0] is identifier of 1st row
	int cols = sizeof(arr[0])/sizeof(arr[0][0]);
	
	for(int r = 0; r < rows; r++){
		for(int c = 0; c < cols; c++){
			cout<<arr[r][c]<<" ";
		}
		cout<<endl;
	}
	return 0;
}