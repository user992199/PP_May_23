#include<iostream>
#include<cstring>
using namespace std;
bool check_perm(char * a1, char *a2){
	int f1[256] = {0}, f2[256] = {0};
	for(int i = 0; ; i++){
		if(a1[i] and a2[i]){
			f1[a1[i]]++; 
			f2[a2[i]]++;
		}
		else if(a1[i] or a2[i]) return false;
		else break;
	}
	for(int i = 0; i < 256; i++)
		if(f1[i] != f2[i])
			return false;
	return true;
}
int main(){
	char a1[] = "hello", a2[] = "lolHe";
	check_perm(a1, a2) ? cout<<"Yes\n" : cout<<"No\n";
	return 0;
}