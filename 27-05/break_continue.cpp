#include<iostream>
using namespace std;
int main(){
	int i = 1;
	while(i <= 5){
		cout<<i<<" ";
		if(i == 2){
			i++;
			break;
			continue;
		}
		i++;
	}
	cout<<endl;
	return 0;
}