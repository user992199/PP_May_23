#include<iostream>
using namespace std;
int main(){
	char grade = 'a';
	switch(grade){ // this variable can either be int or char only
	case 'a':
	case 90 + 7:
	case 'A':
		cout<<"91 - 100\n";
		break;
	case 'B':
	case 'b':
		cout<<"81 - 90\n";
		break;
	case 'C':
	case 'c':
		cout<<"71 - 80\n";
		break;
	default:
		cout<<"00 - 70\n";
		break;
	}
	return 0;
}