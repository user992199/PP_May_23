#include<iostream>
using namespace std;
int * lin_search(int * arr, int n, int key){
	for(int i = 0; i < n; i++){
		if(arr[i] == key){
			return arr+i;
		}
	}
	return NULL;
}
int main(){
	int arr[] = {1, 5, 7, 18, 15, 12, -3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<*arr<<endl;
	cout<<*(lin_search(arr, n, 2))<<endl;
	return 0;
}