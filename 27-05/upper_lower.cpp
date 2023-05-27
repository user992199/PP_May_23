#include<iostream>
using namespace std;
int main(){
	char ch = 'k';
	if(ch >= 'A' and ch <= 'Z'){
		cout<<"Up\n";
	}else if(ch >= 'a' and ch <= 'z'){
		cout<<"low\n";
	}else{
		cout<<"INVALID\n";
	}
	return 0;
}