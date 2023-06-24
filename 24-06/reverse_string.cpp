#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[] = "Hello";
	int n = strlen(arr);
	for(int i = 0, j = n-1; i < j; i++, j--){
		swap(arr[i], arr[j]);
	}
	cout<<arr<<endl;
	return 0;
}