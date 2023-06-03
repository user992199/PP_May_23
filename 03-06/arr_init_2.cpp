#include<iostream>
using namespace std;
int main(){
	// syntax for init 2
	// datatype iden[] = {value1, value2, ..... };
	int arr[] = {1, 2, 3, 4, 5, 10, 11, 12, 13, 6, 7, 8, 9, 10, 100, 101, 1000};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<n<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}