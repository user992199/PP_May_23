#include<iostream>
using namespace std;
// datatype of expected output
// return_type identifier(parameters){
	// task
	// return statement 
// }

// non parameterized with no output/ with void return type
void print_hello_world(){
	cout<<"Hello World\n";
	return; // optional if return type is void
}

void print_hello_world_n_times(int n, int m){
	for(int i = 0; i < n; i++){
		cout<<"Hello ";
	}
	cout<<endl;
	for(int i = 0; i < m; i++){
		cout<<"World ";
	}
	cout<<endl;
}

int sum(){
	cout<<"First line of function 'sum'\n";
	int n, input;
	cin>>n;
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin>>input;
		sum += input;
	}
	return sum;
}

int sum_of_two_numbers(int a, int b){
	// int c = a+b;
	// return c;
	return a + b;
}

int main(){
	// calling/invoking a function
	// identifier(arguments);
	// print_hello_world();
	int n = 3, m = 4;
	print_hello_world_n_times(n, m);
	int final;
	// final = sum();
	// cout<<final<<endl;
	// cout<<sum()<<endl;
	cout<<sum_of_two_numbers(3, 8)<<endl;
	return 0;
}