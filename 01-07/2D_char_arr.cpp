#include<iostream>
using namespace std;
int main(){
	char arr[][100] = {
		"Dell",
		"Coding",
		"C++",
		"Laptop",
		"MAcbook"
	};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}