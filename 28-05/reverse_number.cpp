#include<iostream>
using namespace std;
int main(){
	int n = -1234;
	int rev = 0;

	while(n != 0){
		rev *= 10;
		rev += n % 10;
		n /= 10;
	}

	cout<<-5 % 3<<endl;
	cout<<rev<<endl;
	return 0;
}