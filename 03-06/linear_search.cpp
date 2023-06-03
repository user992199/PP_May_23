#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, 6, 2,1 ,5 , 8,5 ,2 ,56 ,8 ,0 };
	int n = sizeof(arr)/sizeof(int);
	int ind = -1;
	int key = -56;
	int i = 0;
	for(; i < n; i++){
		if(arr[i] == key){
			// ind = i;
			// cout<<i<<endl;
			break;
		}
	}
	if(i != n){
		cout<<i<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
}