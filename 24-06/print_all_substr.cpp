#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str = "Coding";
	for(int sp = 0; sp < str.size(); sp++){
		for(int sz = 1; sz < str.size() - sp; sz++){
			cout<<str.substr(sp, sz)<<endl;
		}
	}
	return 0;
}