#include<iostream>
using namespace std;
int main(){
	// syntax for init 1
	// datatype iden[number of buckets] = {value1, value2, ..... };
	int arr[5] = {1, 2, 3, 4, 5};
	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}