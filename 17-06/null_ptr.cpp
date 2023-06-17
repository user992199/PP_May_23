#include<iostream>
using namespace std;
int main(){
	int * rptr = NULL; // 0
	int r = 7;
	// 1000 lines
	rptr = & r;
	// 1000 lines
	cout<<2 * 22 * (*rptr) / 7<<endl;
	return 0;
}