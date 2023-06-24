#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	string s1 = "coding";
	// cout<<s1.size()<<" "<<s1.length()<<endl;
	string s2 = "Dell";
	// cout<<s1 + " " + s2<<endl;
	// cout<<s1<<endl;
	// s1.append(" Hell WOrld" + s2);
	// s1 += " " + s2;
	// cout<<s1<<endl;
	// s1 > s2 ? cout<<s1<<endl : cout<<s2<<endl;
	// sort(s1.begin(), s1.end(), greater<char>());
	// cout<<s1<<endl;
	// s1.push_back('h');
	// cout<<s1<<endl;
	// s1.pop_back();
	// s1.pop_back();
	// cout<<s1<<endl;
	// s1.compare(s2) ? cout<<"Y\n" : cout<<"N\n";
	cout<<s1.substr(2, 100)<<endl;
	// for(int i = 0; i != size; i++)
	return 0;
}