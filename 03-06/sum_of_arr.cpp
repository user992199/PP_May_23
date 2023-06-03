#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, 6, 2,1 ,5 , 8,5 ,2 ,56 ,8 ,0 };
	int n = sizeof(arr)/sizeof(int);
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	cout<<sum<<endl;
	return 0;
}