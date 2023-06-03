#include<iostream>
using namespace std;
// int a[10000000];
int main(){
	int arr[1000000];
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<arr[n-1]<<endl;
	cout<<"End of program\n";
	return 0;
}