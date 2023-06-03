#include<iostream>
using namespace std;
int main(){
	int w = 110;
	while(w <= 10){
		cout<<w++<< " ";
	}
	cout<<"end while\n";
	int dw = 110;
	do{
		cout<<dw++<<" ";
	}while(dw <= 10);
	cout<<"End Do While\n";
	return 0;
}