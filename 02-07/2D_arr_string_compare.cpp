#include<iostream>
#include<cstring>
using namespace std;
bool compare_string(char a1[], char a2[]){
	for(int j = 0; a2[j] != '\0' or a1[j]!= '\0'; j++){
		if(a1[j] != a2[j]){
			return false;
		}
	}
	return true;
}
int search_char_arr(char arr[][10], int n, char * key){
	for(int i = 0; i < n; i++){
		// if(compare_string(arr[i], key)){
		if(!strcmp(arr[i], key)){
			return i;
		}
	}
	return -1;
}
int main(){
	char arr[][10] = {
		"Dell",
		"Hell",
		"Bell",
		"Tell",
		"Well",
		"Sell"
	};
	int n = sizeof(arr)/sizeof(arr[0]);
	char key[] = "Tell";
	cout<<search_char_arr(arr, n, key)<<endl;
	return 0;
}