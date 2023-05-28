#include<iostream>
using namespace std;
int main(){
	char ch;
	int count = 0;
	while(true){
		cin.get(ch);
		cout<<ch<<endl;
		if(ch == '$'){
			break;
		}
		count++;
	}
	cout<<count<<endl;
	cin>>count;
	return 0;
}