#include<iostream>
using namespace std;

int main(){
	int k = 13;
	int & n = k;
	n++;
	int t = 10;
	n = t;
	cout<<k<<endl;
	cout<<n<<endl;
	n++;
	cout<<k<<endl;
	cout<<n<<endl;
	return 0;
}