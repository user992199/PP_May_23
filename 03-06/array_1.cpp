#include<iostream>
using namespace std;
int main(){
	// int n;
	// cin>>n;

	int arr[10];

	// arr[0] = 1;
	// arr[1] = 2;
	// arr[2] = 3;
	// arr[3] = 4;
	// arr[4] = 5;

	for(int i = 0; i < 10; i++){
		arr[i] = (i+1)*10;
	}

	for(int i = 0; i < 10; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;
	// cout<<arr[4]<<endl;
	return 0;
}