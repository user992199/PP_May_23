#include<iostream>
using namespace std;
int main(){
	// syntax for init 3
	// datatype iden[no of bucket] = {};
	int arr[50] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}