#include<iostream>
using namespace std;
int main(){
	int i = 9;
	if(i >= 0){
		if(i == 0){
			cout<<"zero\n";
		}else{
			cout<<"+ve\n";
		}
	}else{
		cout<<"-ve\n";
	}
	// i >= 0 ? cout<<"+ve\n" : cout<<"-ve\n";
	i >= 0 ? (i == 0 ? cout<<"zero\n" : cout<<"+ve\n") : cout<<"-ve\n";
	return 0;
}