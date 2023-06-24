#include<iostream>
#include<cstring>
using namespace std;
bool is_vowel(char ch){
	switch(ch){
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
		return true;
	}
	return false;
}
bool check_good_string(string s){
	for(int i = 0; i < s.length(); i++){
		if(!is_vowel(s[i])){
			return false;
		}
	}
	return true;
}
int main(){
	string str = "aeioyuuuu";
	check_good_string(str) ? cout<<"Good\n" : cout<<"Not Good\n";
	return 0;
}