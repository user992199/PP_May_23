#include<iostream>
using namespace std;
int main(){
	int i = 1;
	while(i <= 5){
		cout<<i<<" ";
		if(i == 2){
			i++;
			continue;
		}
		i++;
	}
	cout<<endl;
	return 0;
}