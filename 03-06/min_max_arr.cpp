#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[] = {10, 6, 12, 7, -23, 8,0,  80, 32, 6, 9,8, 45};
	int n = sizeof(arr)/sizeof(arr[0]);
	// int min = INT_MAX;
	// int ind = -1;
	int min_ind = 0;
	for(int i = 0; i < n; i++){
		if(arr[min_ind] > arr[i]){
			// min = arr[i];
			// ind = i;
			min_ind = i;
		}
	}
	// cout<<min<<endl;
	// cout<<ind<<endl;
	cout<<min_ind<<": "<<arr[min_ind]<<endl;
	return 0;
}