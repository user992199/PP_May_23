#include<iostream>
using namespace std;
// forward declaration
// f1
// f2
// syntax
// returntype iden(parameter);
void print_world();
void print_hello_world();
// void print_hello_world_n_times(int n);
void print_hello_world_n_times(int, int, int);

int main(){
	print_hello_world_n_times(5, 9, 10);
	return 0;
}
void print_hello_world_n_times(int n, int i, int k){
	for(int i = 0; i < n; i++){
		print_hello_world();
	}
}
void print_hello_world(){
	cout<<"Hello ";
	print_world();
}
void print_world(){
	cout<<"World\n";
}