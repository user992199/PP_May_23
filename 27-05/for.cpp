#include<iostream>
using namespace std;
int main(){
	int i = 3;
	for( ; i <= 10; ){
		if(i == 11){
			break;
		}
		cout<<i<<" ";
		i++;
	}
	cout<<endl;
	return 0;
}