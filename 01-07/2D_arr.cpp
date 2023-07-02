#include<iostream>
using namespace std;
int main(){
	// syntax
	// datatype identifier[number of rows][number of columns];
	int arr[5][3];
	int buckets = sizeof(arr)/sizeof(arr[0][0]);
	int rows = sizeof(arr)/sizeof(arr[0]); // arr[0] is identifier of 1st row
	int cols = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<rows<<endl;
	cout<<cols<<endl;
	cout<<arr<<endl;
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	for(int r = 0; r < rows; r++){
		for(int c = 0; c < cols; c++){
			cout<<arr[r][c]<<" ";
		}
		cout<<endl;
	}
	return 0;
}