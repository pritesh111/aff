#include <iostream>
using namespace std;
int main(){
	int bs,all,ded,ns;
	cout<<"enter basic salary "<<endl;
	cin >> bs;
	cout << "enter percent allowance " << endl;
	cin >> all;
	cout << "enter percent deduction " << endl;
	cin >> ded;
	ns = bs + (bs*all/100) - (bs*ded/100);
	cout << "net salary is " << ns << endl;
	return 0;
	
}