#include<iostream>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	char input[100], ans[100];
	int max_len = INT_MIN;
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		cin.getline(input, 100);
		int n = strlen(input);
		if(n > max_len){
			// for(int i = 0; i <= n; i++){
			// 	ans[i] = input[i];
			// }
			// strcpy(target, dummy);
			strcpy(ans, input);
			max_len = n;
		}
	}
	cout<<ans<<endl;
	return 0;
}