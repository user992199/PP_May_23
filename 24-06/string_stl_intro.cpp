#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s1;
	string s2 = "Coding";
	cout<<sizeof(s2)<<endl;
	s1 = s2;
	cout<<s1<<endl;
	string s3(s1);
	s3[4] = 'K';
	cout<<s3<<endl;
	string s4 = s3;
	cout<<s4<<endl;
	getline(cin, s4, '$');
	cout<<s4<<endl;
	return 0;
}