#include<iostream>
#include<cstring>
using namespace std;
void combine(char * a1, char * a2){
	int n1 = strlen(a1), n2 = strlen(a2);
	for(int i = n1, j = 0; j <= n2; i++, j++){
		a1[i] = a2[j];
	}
	// a1[n1+n2] = '\0';
}
int main(){
	char a1[100] = "Hello ";
	char a2[100] = "World";
	combine(a1, a2);
	strcat(a1, a2);
	cout<<a1<<endl;
	cout<<a2<<endl;
	return 0;
}