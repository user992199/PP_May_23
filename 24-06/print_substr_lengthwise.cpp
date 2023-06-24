#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(string s){
	int i = 0, j = s.size()-1;
	while(i < j){
		if(s[i++] != s[j--]) return false;
	}
	return true;
}
void print_all_substr(string str){
	for(int sz = 1; sz <= str.size(); sz++){
		for(int sp = 0; sp <= str.size() - sz; sp++){
			string substr = str.substr(sp, sz);
			if(palindrome(substr)){
				cout<<substr<<endl;
			}
		}
	}
}
int main(){
	string str = "racecar";
	print_all_substr(str);
	return 0;
}