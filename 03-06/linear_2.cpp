#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, 6, 2,1 ,5 , 8,5 ,2 ,56 ,8 ,0, 9, 8, 19, 20 };
	int n = sizeof(arr)/sizeof(int);
	int key = 8;
	bool is_key_present = false;
	bool is_key_not_present = true;
	for(int i = 0; i < n; i++){
		if(arr[i] == key){
			cout<<i<<" ";
			is_key_present = true;
			is_key_not_present = false;
		}
	}
	// if(is_key_present){
	// 	cout<<endl;
	// }else{
	// 	cout<<"-1\n";
	// }
	if(is_key_not_present){
		cout<<-1;
	}
	cout<<endl;
	return 0;
}