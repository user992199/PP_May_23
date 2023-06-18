#include<iostream>
using namespace std;
void take_input(char *arr, int n, char delimiter = '\n'){
	for(int i = 0; i < n-1; i++){
		char ch;
		cin.get(ch);
		if(ch == delimiter){
			arr[i] = '\0';
			return;
		}
		arr[i] = ch;
	}
	arr[n-1] = '\0';
}
int main(){
	char arr[100];
	// cin>>arr;
	// cin.get(arr, 100);
	// take_input(arr, 100);
	cin.getline(arr, 100, '$');
	cout<<arr<<endl;
	cin.getline(arr, 100);
	cout<<arr<<endl;
	return 0;
}