#include<iostream>
using namespace std;
int main(){
	// char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	// char arr[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char arr1[5] = {'h', 'e', 'l', 'l', 'o'};
	char arr2[6] = {'h', 'e', 'l', 'l', 'o'};
	cout<<arr1<<endl;
	cout<<arr2<<endl;

	char arr3[] = "worldhell\0ohellohello";
	cout<<sizeof(arr3)<<endl;
	char a4[100];
	cout<<arr3<<endl;
	cout<<a4<<endl;
	return 0;
}