#include<iostream>
using namespace std;
void far_to_cel(int init, int fval, int step){
	for(; init <= fval; init += step){
		int cel = 5.0 * (init - 32) / 9;
		cout<<init<<" "<<cel<<endl;
	}
	// while(init <= fval){
	// 	int cel = 5.0 * (init - 32) / 9;
	// 	cout<<init<<" "<<cel<<endl;
	// 	init += step;
	// }
}
int main(){
	far_to_cel(0, 300, 20);
	return 0;
}