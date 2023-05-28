#include<iostream>
using namespace std;
int n = 100; // iss variable ka scope hai global
int main(){
	int n = 10;
	if(true){
		int n = 0;
		if(n == 0){
			int n = 3;
		}
		::n++;
		cout<<n<<endl;
	}
	cout<<n<<endl;
	cout<<::n<<endl;
	return 0;
}