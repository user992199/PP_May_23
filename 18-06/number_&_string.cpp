#include<iostream>
using namespace std;
int main(){
	int n;
	char arr[100];
	cin>>n;
   	// char ch;
   	// cin.get(ch);
   	cin.ignore();
	cin.getline(arr, 100);
	cout<<"int: "<<n<<endl;
	cout<<"string: "<<arr<<endl;
    // cout<<"ch: "<<ch<<".";
	return 0;
}