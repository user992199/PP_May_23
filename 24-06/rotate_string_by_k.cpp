#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	char arr[] = "Sharing"; // "ingShar"
	int k = 3;
	int n = strlen(arr);
	reverse(arr, arr+n);
	reverse(arr, arr+k);
	reverse(arr+k, arr+n);
	cout<<arr<<endl;
	return 0;
}