#include<iostream>
using namespace std;
int main(){
	int arr[5][5] = {
		{1, 2, 3, 4, 5},
		{10, 9, 8, 7, 6},
		{16, 17, 18, 19, 20},
		{22, 24, 26, 28, 30},
		{87, 86, 85, 84, 83}
	};
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = sizeof(arr[0])/sizeof(arr[0][0]);
	int key = 17;
	int ans_row = -1, ans_col = -1;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] == key){
				ans_row = i+1;
				ans_col = j+1;
				i = m;
				break;
			}
		}
		// if(ans_row != -1) break;
	}
	cout<<ans_row<<" "<<ans_col<<endl;
	return 0;
}