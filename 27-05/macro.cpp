#include<iostream>
#define pi1 (3.14 + 1)
using namespace std;
int main(){
	int r = 7;
	const float pi2 = 3.14 + 1;
	cout<<2 * pi1 * r<<endl;
	cout<<2 * pi2 * r<<endl;
	return 0;
}