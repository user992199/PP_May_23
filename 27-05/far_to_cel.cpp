#include<iostream>
using namespace std;
int main(){
	int init = -42, fval = 300, step = 20;
	while(init <= fval){
		cout<<init<<" ";
		int cel = (5)*(init-32)/9;
		cout<<cel<<endl;
		init = init + step;
	}
	return 0;
}