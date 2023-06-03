#include<iostream>
using namespace std;
int main(){
	int arr[5] = {1, 2, 3, 4, 5};

	int a2[10] = {0};

	a2[10] = 10;
	
	cout<<arr[0]<<endl;

	for(int i = 0; i < 5; i++){
		arr[i] = i+1;
	}

	cout<<a2[10]<<endl;
	return 0;
}