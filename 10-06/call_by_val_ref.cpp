#include<iostream>
using namespace std;
void update(int k){
	k++;
}
void update_ref(int & k){
	k++;
}
int main(){
	int k = 13;
	// update(k);
	update_ref(k);
	cout<<"main: "<<k<<endl;
	// cout<<t<<endl;
	return 0;
}